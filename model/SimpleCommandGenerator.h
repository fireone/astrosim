#ifndef _MODEL_SIMPLECOMMANDGENERATOR_H
#define _MODEL_SIMPLECOMMANDGENERATOR_H

#include "ICommandGenerator.h"

namespace model
{

namespace Cmd = ::command;

class SimpleCommandGenerator : public ICommandGenerator
{
public:
    SimpleCommandGenerator();

    Cmd::Command requestCmd();
};

}

#endif // _MODEL_SIMPLECOMMANDGENERATOR_H
