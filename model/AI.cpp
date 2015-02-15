#include "AI.h"

namespace model
{

Cmd::Command AI::requestCmd( const Environment &env )
{
    return Cmd::Command( 0.5, 0, false );
}

}
