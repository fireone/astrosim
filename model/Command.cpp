#include "Command.h"

namespace model
{

Command::Command( double thrust, double rotation, bool doFire )
: m_thrust( thrust )
, m_rotation( rotation )
, m_doFire( doFire )
{

}

double Command::getThrust()
{
   return m_thrust;
}

double Command::getRotation()
{
   return m_rotation;
}

bool Command::getDoFire()
{
    return m_doFire;
}

}
