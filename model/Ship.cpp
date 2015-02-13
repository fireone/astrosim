#include "Ship.h"

namespace model
{

Command Ship::requestCmd(const Environment &env)
{
    return Command( 0.5, 0, false );
}

}
