#include "Ship.h"
#include <math.h>

namespace model
{

Ship::Ship( long id, Utl::Pos2d pos, double rot, ICommandGenerator* pCmdGenerator )
: AbstractActor( id, pos, rot )
, m_apCmdGenerator( pCmdGenerator )
{
}

void Ship::update( double diff )
{
    ::command::Command cmd( m_apCmdGenerator->requestCmd() );

    m_rot += cmd.getRotation();

    m_pos.moveX( cmd.getThrust() * sin( m_rot ) * diff );

    m_pos.moveY( cmd.getThrust() * cos( m_rot ) * diff );
}

}
