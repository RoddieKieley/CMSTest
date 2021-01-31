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

#include "SecurityCommand.h"
#include "../Proto/CommandBuffer.pb.h"
#include "../Proto/SecurityCommandBuffer.pb.h"
#include "../Network/SimpleAsyncProducer.h"
//#include <cms/Destination.h>
//#include <cms/BytesMessage.h>
//#include <cms/TemporaryQueue.h>
//#include <decaf/util/UUID.h>
#include <string>
#include <assert.h>


// Constructor
SecurityCommand::
_SecurityDependencies::
_SecurityDependencies(redhatgamedev::srt::CommandBuffer* pCommandBuffer, const proton::message* pBytesMessage) :
    ACommand::_Dependencies(pCommandBuffer, pBytesMessage)
{    
}

// Destructor
SecurityCommand::
_SecurityDependencies::
~_SecurityDependencies()
{
    
}


// Constructor
SecurityCommand::SecurityCommand(_SecurityDependencies& theDependencies) :
    ACommand(theDependencies)
{
    
}

// Destructor
SecurityCommand::~SecurityCommand()
{
    
}
