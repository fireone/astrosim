#ifndef _MODEL_AI_H_
#define _MODEL_AI_H_

#include "ICommandGenerator.h"

namespace model
{

class AI : public ICommandGenerator
{
public:
    Cmd::Command requestCmd();
};

}

#endif // _MODEL_AI_H_
