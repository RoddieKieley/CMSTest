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

#include "MessageConsumer.h"
#include "receiver.h"
//#include <cms/BytesMessage.h>
//#include <cms/CMSException.h>
#include <google/protobuf/message.h>
#include <string.h>
#include <string>
#include <assert.h>
//#include "../Logging/loguru.cpp"

// Constructor
MessageConsumer::
_Dependencies::
_Dependencies(receiver* preceiver) :
    m_preceiver(preceiver)
{
    assert(m_preceiver);
}

// Destructor
MessageConsumer::
_Dependencies::
~_Dependencies()
{
    
}


// Constructor
MessageConsumer::MessageConsumer(_Dependencies* pDependencies)
{
    assert(pDependencies);

    m_preceiver = pDependencies->m_preceiver;
    
    assert(m_preceiver);

    // TODO: Proton update needed
    //m_preceiver->runConsumer();
//    m_preceiver->SetMessageListener(this);
}

// Destructor
MessageConsumer::~MessageConsumer()
{
    m_preceiver->close();
    delete m_preceiver;
    m_preceiver = NULL;
}

// Helper(s)
void MessageConsumer::Enqueue(proton::message* pBytesMessage)
{
    assert(pBytesMessage);
    
    Poco::Tuple<proton::message*>*    pTuple = new Poco::Tuple<proton::message*>(pBytesMessage);
    m_aTupleQueueMutex.lock();
    m_aTupleQueue.push(pTuple);
    m_aTupleQueueMutex.unlock();
}

// cms::MessageListener implementation
//void MessageConsumer::onMessage(const cms::Message* pMessage)
void MessageConsumer::on_message(proton::delivery &d, proton::message &response)
{

//    LOG_F(INFO, "MessageConsumer::on_message TODO");

    // TODO: Proton update needed
//    assert(pMessage);
//
//    cms::Message* pMessageClone = pMessage->clone();
//    proton::message* pBytesMessage = dynamic_cast<proton::message*>(pMessageClone);
//
//    Enqueue(pBytesMessage);
}

// Method(s)
// Dispatches all the messages it has received from the network
// via the configured simple async consumer
void MessageConsumer::Dispatch()
{
    // TODO: Used ScopedLock (?)
    try
    {
        m_aTupleQueueMutex.lock();
        while (!m_aTupleQueue.empty())
        {
            Poco::Tuple<proton::message*>*  pTuple = m_aTupleQueue.front();
            m_aTupleQueue.pop();
            ReceivedCMSMessageEvent(this, pTuple);
        }
        m_aTupleQueueMutex.unlock();
    }
    catch ( std::exception& e )
    {
        //e.printStackTrace();
        std::cout << e.what();
    }
}
