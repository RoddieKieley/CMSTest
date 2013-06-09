//
//  Messenger_Consumer.cpp
//  CMSTest
//
//  Created by Roddie Kieley on 13-05-19.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#include "Messenger_Consumer.h"
#include "../Shared/SimpleAsyncConsumer.h"
#include "../Proto/GameEvent.pb.h"
#include "../Proto/EntityGameEvent.pb.h"
#include "EntityData.h"
#include <cms/CMSException.h>
#include <cms/BytesMessage.h>
#include <assert.h>

Messenger::_Consumer::_EventPublisher           Messenger::_Consumer::EventPublisher;

using namespace cms;
using namespace gameevent;


// Constructor(s)
Messenger::_Consumer::_Consumer():
    m_pSimpleAsyncConsumer(NULL)
{

}

// Destructor(s)
Messenger::_Consumer::~_Consumer()
{

}

// Helper(s)
void Messenger::_Consumer::Setup(std::string& strBrokerURI, std::string& strDestinationURI)
{
    bool            useTopics = false;
    bool            clientAck = false;
    
    std::cout << "Messenger::_Consumer::Setup()..." << std::endl;
    
    m_pSimpleAsyncConsumer = new SimpleAsyncConsumer(strBrokerURI, strDestinationURI, useTopics, clientAck);
    m_pSimpleAsyncConsumer->runConsumer();
    m_pSimpleAsyncConsumer->SetMessageListener(this);
}

void Messenger::_Consumer::Teardown()
{
    m_pSimpleAsyncConsumer->close();
    delete m_pSimpleAsyncConsumer;
    m_pSimpleAsyncConsumer = NULL;    
}

// MessageListener implementation
void Messenger::_Consumer::onMessage(const cms::Message* pMessage)
{
    assert(pMessage);

    m_aMessageQueue.lock();
    //m_aMessageQueue.push(pMessage);
    //m_aMessageQueue.push(pMessage->clone());
    const BytesMessage* pBytesMessage = dynamic_cast<const BytesMessage*>(pMessage);
    //m_aMessageQueue.push(pBytesMessage->clone());
    int iBodyLength = pBytesMessage->getBodyLength();
    unsigned char* pucBodyBytesCopy = new unsigned char[iBodyLength];
    memcpy(pucBodyBytesCopy, pBytesMessage->getBodyBytes(), iBodyLength * sizeof(unsigned char));
    m_aMessageQueue.push(std::pair<int, unsigned char*>(iBodyLength, pucBodyBytesCopy));
    m_aMessageQueue.unlock();
    
//    static int count = 0;
//
//    //bool            clientAck = false;
//    std::string     strNMSXGroupIDPropertyName = "NMSXGroupID";
//    std::string     strNMSXGroupID = "";
//    //std::string     strUUID = "";
//    //uint64_t        ui64Tag = 0;
//    GameEvent       aGameEvent;
//    GameEvent*      pGameEvent = NULL;
//    //EntityData      anEntityData;
//    
//    
//    try
//    {
//        count++;
//        const BytesMessage* pBytesMessage = dynamic_cast<const BytesMessage*>(pMessage);
//        assert(pBytesMessage);
//        
//        unsigned char* pucBodyBytes = pBytesMessage->getBodyBytes();
//        int iBodyBytes = pBytesMessage->getBodyLength();
//        assert(pucBodyBytes);
//        assert(iBodyBytes > 0);
//        
////        if (aGameEvent.ParseFromArray(pucBodyBytes, iBodyBytes))
////        {
////            m_aMessageQueue.lock();
////            m_aMessageQueue.push(pGameEvent);
////            m_aMessageQueue.unlock();
////            
////            switch (aGameEvent.type())
////            {
////                case GameEvent_GameEventType_ENTITY:
////                    const EntityGameEvent& anEntityGameEvent = aGameEvent.entitygameevent();
////                    switch (anEntityGameEvent.type())
////                    {
////                        case EntityGameEvent_EntityGameEventType_CREATE:
////                            EventPublisher.ReceivedCreateEntityRequest(                                                                       this,
////                                EntityData(anEntityGameEvent.entitytag(), anEntityGameEvent.uuid()));
////                            break;
////                        case EntityGameEvent_EntityGameEventType_DESTROY:
////                            EventPublisher.ReceivedDestroyEntityRequest(
////                                this,
////                                EntityData(anEntityGameEvent.entitytag(), anEntityGameEvent.uuid()));
////                            break;
////                        default:
////                            assert(false);
////                            break;
////                    }
////                    break;
//////                default:
//////                    assert(false);
//////                    break;
////            }
////        }
//        
//        pGameEvent = aGameEvent.New();
//        if (pGameEvent->ParseFromArray(pucBodyBytes, iBodyBytes))
//        {
//            m_aMessageQueue.lock();
//            m_aMessageQueue.push(pGameEvent);
//            m_aMessageQueue.unlock();
//        }
//        
//        //aDualStick.ParseFromArray(pucBodyBytes, iBodyBytes);
//        
////        if (pBytesMessage->propertyExists(strNMSXGroupIDPropertyName))
////        {
////            strNMSXGroupID = pBytesMessage->getStringProperty(strNMSXGroupIDPropertyName);
////        }
//        
//        //if(clientAck)
//        //{
//        //    pMessage->acknowledge();
//        //}
//        
//        //FireDualStickEvent(aDualStick);
//    }
//    catch (CMSException& e)
//    {
//        e.printStackTrace();
//    }
}

void Messenger::_Consumer::ProcessReceivedMessages()
{
    int                 iBodyBytes = -1;
    unsigned char*      pucBodyBytes = NULL;
    GameEvent           aGameEvent;// = NULL;
    //const BytesMessage* pBytesMessage = NULL;
    //const cms::Message* pMessage = NULL;
    //const cms::BytesMessage* pBytesMessage = NULL;
    
    try
    {
        m_aMessageQueue.lock();
        //std::vector<const cms::Message*>   vecMessage = m_aMessageQueue.toArray();
        //std::vector<cms::BytesMessage*>   vecMessage = m_aMessageQueue.toArray();
        //std::vector<unsigned char*>   vecMessage = m_aMessageQueue.toArray();
        std::vector<std::pair<int, unsigned char*> > vecMessage = m_aMessageQueue.toArray();
        m_aMessageQueue.clear();
        m_aMessageQueue.unlock();
        
        for(int i = 0; i < vecMessage.size(); ++i)
        {
            //cms::BytesMessage* pBytesMessage = vecMessage[i];
            
            //const BytesMessage* pBytesMessage = dynamic_cast<const BytesMessage*>(pMessage);
            //assert(pBytesMessage);

//            pucBodyBytes = pBytesMessage->getBodyBytes();
//            iBodyBytes = pBytesMessage->getBodyLength();
//            assert(pucBodyBytes);
//            assert(iBodyBytes > 0);

            iBodyBytes = vecMessage[i].first;
            pucBodyBytes = vecMessage[i].second;
            assert(iBodyBytes > 0);
            assert(pucBodyBytes);

            if (aGameEvent.ParseFromArray(pucBodyBytes, iBodyBytes))
            {
                switch (aGameEvent.type())
                {
                    case GameEvent_GameEventType_ENTITY:
                        const EntityGameEvent& anEntityGameEvent = aGameEvent.entitygameevent();
                        switch (anEntityGameEvent.type())
                        {
                            case EntityGameEvent_EntityGameEventType_CREATE:
                                EventPublisher.ReceivedCreateEntityRequest(                                                                       this,
                                    EntityData(anEntityGameEvent.entitytag(), anEntityGameEvent.uuid()));
                                break;
                            case EntityGameEvent_EntityGameEventType_DESTROY:
                                EventPublisher.ReceivedDestroyEntityRequest(
                                    this,
                                    EntityData(anEntityGameEvent.entitytag(), anEntityGameEvent.uuid()));
                                break;
                            default:
                                assert(false);
                                break;
                        }
                        break;
//                    default:
//                        assert(false);
//                        break;
                }
            }
        }
    }
    catch (CMSException& e)
    {
        e.printStackTrace();
    }
}
