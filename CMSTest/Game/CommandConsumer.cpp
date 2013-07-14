//
//  CommandConsumer.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 13-07-10.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#include "CommandConsumer.h"
#include "MessageConsumer.h"
//#include "../Proto/Command.pb.h"
//ls #include "../Proto/SecurityCommand.pb.h"
#include "Poco/Delegate.h"
#include <cms/BytesMessage.h>
#include <cms/CMSException.h>
#include <vector>
#include <assert.h>

using namespace google::protobuf;


// Constructor
CommandConsumer::
_Dependencies::
_Dependencies(MessageConsumer* pMessageConsumer, FactoryT<command::Command, SecurityCommand_Dependencies>& anSecurityCommandFactory) :
    m_aSecurityCommandFactory(anSecurityCommandFactory),
    m_pMessageConsumer(pMessageConsumer)
{
    assert(m_pMessageConsumer);
}

// Destructor
CommandConsumer::
_Dependencies::
~_Dependencies()
{
    
}
              
// Constructor(s)
// Constructor
CommandConsumer::CommandConsumer(_Dependencies* pDependencies) :
    m_aSecurityCommandFactory(pDependencies->m_aSecurityCommandFactory)
{
    assert(pDependencies);
    
    m_pMessageConsumer = pDependencies->m_pMessageConsumer;
    
    assert(m_pMessageConsumer);
    
    m_pMessageConsumer->ReceivedCMSMessageEvent += Poco::Delegate<CommandConsumer, Poco::Tuple<cms::BytesMessage*>*& >(this, &CommandConsumer::HandleReceivedCMSMessageEvent);
    
}
// CommandConsumer(ConsumptionStrategy* pConsumptionStrategy);

// Destructor
CommandConsumer::~CommandConsumer()
{
    m_pMessageConsumer->ReceivedCMSMessageEvent -= Poco::Delegate<CommandConsumer, Poco::Tuple<cms::BytesMessage*>*& >(this, &CommandConsumer::HandleReceivedCMSMessageEvent);
}

// Helper(s)
void CommandConsumer::Enqueue(google::protobuf::Message* pMessage)
{
    assert(pMessage);
    
    m_aTupleQueue.lock();
//    m_aTupleQueue.push(pMessage);
    m_aTupleQueue.unlock();
}

void CommandConsumer::Enqueue(Poco::Tuple<cms::BytesMessage*>* pTuple)
{
    assert(pTuple);
    
    using namespace command;
    
    cms::BytesMessage* pBytesMessage = pTuple->get<0>();
    std::pair<unsigned char*, unsigned long>* pMessagePair = MessageToPair(pBytesMessage);
    assert(pMessagePair);
    
    google::protobuf::Message* pMessage = m_aSecurityCommandFactory.Create(pMessagePair);
    
    Poco::Tuple<cms::BytesMessage*, google::protobuf::Message*>* pNewTuple = new Poco::Tuple<cms::BytesMessage*, google::protobuf::Message*>(pBytesMessage, pMessage);
    
    //pTuple->set<1>(pMessage);
    m_aTupleQueue.lock();
    m_aTupleQueue.push(pNewTuple);
    m_aTupleQueue.unlock();
    
    delete pMessagePair;
    delete pTuple;
}

void CommandConsumer::Enqueue(std::pair<unsigned char*, unsigned long>* pMessagePair)
{
    assert(pMessagePair);
    
    Message* pMessage = PairToMessage(pMessagePair);
    Enqueue(pMessage);
}

Message* CommandConsumer::PairToMessage(std::pair<unsigned char*, unsigned long>* pMessagePair)
{
    assert(pMessagePair);

    Message* pMessage = m_aSecurityCommandFactory.Create(pMessagePair);
    
    return pMessage;
}

std::pair<unsigned char*, unsigned long>* CommandConsumer::MessageToPair(cms::BytesMessage* pBytesMessage)
{
    assert(pBytesMessage);
    
    using namespace std;
    using namespace cms;
    
    pair<unsigned char*, unsigned long>*    pMessagePair = NULL;
    
    pBytesMessage->reset();
    int iBodyLength = pBytesMessage->getBodyLength();
    unsigned char* pucBodyBytesCopy = new unsigned char[iBodyLength];
    memcpy(pucBodyBytesCopy, pBytesMessage->getBodyBytes(), iBodyLength * sizeof(unsigned char));
    pMessagePair = new pair<unsigned char*, unsigned long>(pucBodyBytesCopy, iBodyLength);
    
    return pMessagePair;
}

// Method(s)
void CommandConsumer::Consume()
{
    Poco::Tuple<cms::BytesMessage*, google::protobuf::Message*>* pTuple = NULL;
    m_aTupleQueue.lock();
    while (!m_aTupleQueue.empty())
    {
        pTuple = m_aTupleQueue.pop();
        CommandConsumedEvent(this, pTuple);
    }
    m_aTupleQueue.unlock();
}

// Event response
void CommandConsumer::HandleReceivedCMSMessageEvent(const void* pSender, Poco::Tuple<cms::BytesMessage*>*& pTuple)
{
    Enqueue(pTuple);
}

// void Consume(google::protobuf::Message* pMessage)
//{
//      m_pConsumptionStrategy->Consume();
//}


