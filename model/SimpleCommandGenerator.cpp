#include "SimpleCommandGenerator.h"

namespace model
{

SimpleCommandGenerator::SimpleCommandGenerator()
{
}


Cmd::Command SimpleCommandGenerator::requestCmd()
{
    Cmd::Command cmd( 100, 0.01, false );

    return cmd;
}

}
