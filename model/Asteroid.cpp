#include "Asteroid.h"

namespace model
{

Asteroid::Asteroid( long id, utils::Pos2d pos, double rot )
: AbstractActor( id, pos, rot )
, x_step()
, y_step()
, rot_step()
{
}

void Asteroid::update( double diff )
{
}

}
