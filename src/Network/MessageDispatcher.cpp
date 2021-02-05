//   Copyright 2020 Roddie Kieley
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.

#include "MessageDispatcher.h"
#include "sender.h"
#include "../Events/EventDispatcher.h"
#include "../Proto/GameEventBuffer.pb.h"
#include <Poco/Delegate.h>
#include <cms/CMSException.h>
#include <google/protobuf/message.h>
#include <string>
#include <assert.h>


// Constructor
MessageDispatcher::
_Dependencies::
_Dependencies(sender* psender) :
    m_psender(psender)
{
    assert(m_psender);
}

// Destructor
MessageDispatcher::
_Dependencies::
~_Dependencies()
{
    
}


// Constructor
MessageDispatcher::MessageDispatcher(_Dependencies* pDependencies)
{
    assert(pDependencies);
    
    m_psender = pDependencies->m_psender;
    
    EventDispatcher& theEventDispatcher = EventDispatcher::Instance();
    theEventDispatcher.EventDispatchedEvent += Poco::Delegate<MessageDispatcher, google::protobuf::Message*&>(this, &MessageDispatcher::HandleEventDispatchedEvent);
    
    
    assert(m_psender);
}

// Destructor
MessageDispatcher::~MessageDispatcher()
{
    EventDispatcher& theEventDispatcher = EventDispatcher::Instance();
    theEventDispatcher.EventDispatchedEvent -= Poco::Delegate<MessageDispatcher, google::protobuf::Message*&>(this, &MessageDispatcher::HandleEventDispatchedEvent);
}

// Helper(s)
void MessageDispatcher::Enqueue(std::pair<const unsigned char*, unsigned long>* pMessagePair)
{
    m_aMessageQueueMutex.lock();
    m_aMessageQueue.push(pMessagePair);
    m_aMessageQueueMutex.unlock();
}

void MessageDispatcher::Enqueue(google::protobuf::Message* pEventMessage)
{
    assert(pEventMessage);
    
    std::pair<const unsigned char*, unsigned long>* pMessagePair = MessageToPair(pEventMessage);
    if (!pMessagePair)
    {
        return;
    }
        
    Enqueue(pMessagePair);
}

std::pair<const unsigned char*, unsigned long>* MessageDispatcher::MessageToPair(google::protobuf::Message* pMessage)
{
    assert(pMessage);

    using namespace std;
    using namespace redhatgamedev::srt;
    
    pair<const unsigned char*, unsigned long>*      pMessagePair = NULL;
    const unsigned char*                            pucMessageBytes = NULL;
    
    if (NULL == pMessage)
    {
        return NULL;
    }
    
    string strPBBuffer = "";
    //GameEvent* pGameEvent = static_cast<GameEvent*>(pMessage);
    
    //EntityGameEvent* pEntityGameEvent = pGameEvent->entitygameevent();
    //const EntityGameEvent& anEntityGameEvent = pGameEvent->entitygameevent();
    //cout << hex << anEntityGameEvent.type() << endl;
    //        if (pEntityGameEvent)
    //{
    //uint64_t ui64Tag = anEntityGameEvent.entitytag();
    //bitset<sizeof(uint64_t)*8>    aBitSet(ui64Tag);
    //cout << hex << anEntityGameEvent.entitytag() << endl;
    //cout << aBitSet << endl;
    //}
    
    strPBBuffer.clear();
    pMessage->SerializeToString(&strPBBuffer);
    pMessage->Clear();
    //const char* pucText = strPBBuffer.c_str();
    unsigned long ulLength = strPBBuffer.length();    
    pucMessageBytes = new unsigned char[ulLength];
    memcpy((void*)pucMessageBytes, (const void*)strPBBuffer.c_str(), (size_t)(sizeof(char) * ulLength));
    pMessagePair = new pair<const unsigned char*, unsigned long>(pucMessageBytes, ulLength);

    return pMessagePair;
    
}
// Method(s)
// Dispatches all the messages it has received to the network
// via the configured simple async producer
void MessageDispatcher::Dispatch()
{
    m_aMessageQueueMutex.lock();
    while (!m_aMessageQueue.empty())
    {
        try
        {
            std::pair<const unsigned char*, unsigned long>* pMessagePair = m_aMessageQueue.front();
            m_aMessageQueue.pop();
            if (pMessagePair->second > 0)
            {
                //m_psender->Send(pMessagePair->first, (int)pMessagePair->second);
                // TODO: Proton update needed
                m_psender->send(proton::message("TODO FIXME pMessagePair->first"));
            }
        }
        catch ( cms::CMSException& e )
        {
            e.printStackTrace();
        }
    }
    m_aMessageQueueMutex.unlock();
}

// EventDispatcher event response
void MessageDispatcher::HandleEventDispatchedEvent(const void* pSender, google::protobuf::Message*& pEventMessage)
{
    Enqueue(pEventMessage);
}
