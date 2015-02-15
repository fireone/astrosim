#ifndef _MODEL_ICOMMAND_GENERATOR_H_
#define _MODEL_ICOMMAND_GENERATOR_H_

#include <memory>
#include "Environment.h"
#include "command/Command.h"

namespace model
{

namespace Cmd = ::command;

class ICommandGenerator
{
public:
    ~ICommandGenerator(){}

    virtual Cmd::Command requestCmd( const Environment& env ) = 0;
};

}

#endif // _MODEL_ICOMMAND_GENERATOR_H_
