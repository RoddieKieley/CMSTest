//
//  SecurityCommand.h
//  CMSTest
//
//  Created by Roddie Kieley on 13-07-11.
//  Copyright (c) 2013 Roddie Kieley. All rights reserved.
//

#ifndef __CMSTest__SecurityCommand__
#define __CMSTest__SecurityCommand__

#include "ACommand.h"
#include "Poco/BasicEvent.h"
#include <string>

namespace google
{
    namespace protobuf
    {
        class Message;
    }
}
namespace cms
{
    class BytesMessage;
}


class SecurityCommand :
    public ACommand
{
public:
    class _SecurityDependencies :
        public _Dependencies
    {
    private:
    protected:
    public:
        // Constructor
        _SecurityDependencies(usx::geofactions::CommandBuffer* pCommandBuffer, const cms::BytesMessage* pBytesMessage);
        
        // Destructor
        ~_SecurityDependencies();
    };
    
private:
protected:
public:
    // Constructor
    SecurityCommand(_SecurityDependencies& theDependencies);
    
    // Destructor
    virtual ~SecurityCommand();
    
    // Method(s)
    virtual void Execute() = 0;
};

#endif /* defined(__CMSTest__SecurityCommand__) */
