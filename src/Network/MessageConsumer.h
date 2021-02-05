#ifndef __SRT__MessageConsumer__
#define __SRT__MessageConsumer__

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

#include <Poco/BasicEvent.h>
#include <Poco/Tuple.h>
#include <cms/MessageListener.h>
#include <utility>
#include <string>
#include <queue>
#include <mutex>

namespace cms
{
    class Message;
    class BytesMessage;
}
namespace google
{
    namespace protobuf
    {
        class Message;
    }
}
class SimpleAsyncConsumer;
class AEntity;


class MessageConsumer :
    cms::MessageListener
{
public:
    class _Dependencies
    {
    private:
    protected:
    public:
        SimpleAsyncConsumer*                m_pSimpleAsyncConsumer;
        
        // Constructor
        _Dependencies(SimpleAsyncConsumer* pSimpleAsyncConsumer);
        
        // Destructor
        ~_Dependencies();
    };
    
private:
protected:
    std::queue<Poco::Tuple<cms::BytesMessage*>* >                     m_aTupleQueue;
    std::mutex                                                        m_aTupleQueueMutex;
    SimpleAsyncConsumer*                                              m_pSimpleAsyncConsumer;
    
    // Helper(s)
    void                                                Enqueue(cms::BytesMessage* pBytesMessage);
    
    // Constructor
    MessageConsumer(_Dependencies* pDependencies);
    
    // Destructor
    ~MessageConsumer();
    
public:
    Poco::BasicEvent<Poco::Tuple<cms::BytesMessage*>*& >              ReceivedCMSMessageEvent;
    
    // Singleton
    static MessageConsumer& Instance(_Dependencies* pDependencies)//unsigned int uiCapacity)
    {
        static MessageConsumer  theMessageConsumer(pDependencies);
        return theMessageConsumer;
    }
    
    // Method(s)
    // Dispatches all the messages it has received to the network
    // via the configured simple async producer
    void Dispatch();
    
    // MessageListener implementation
    virtual void onMessage(const cms::Message* pMessage);
};

#endif /* defined(__SRT__MessageConsumer__) */
