#include "AbstractActor.h"

namespace model
{

AbstractActor::AbstractActor( long       id,
                              Utl::Pos2d pos,
                              double     rot )
: m_id( id )
, m_pos ( pos )
, m_rot( rot )
{
}

long AbstractActor::getId() const
{
    return m_id;
}

utils::Pos2d AbstractActor::getPos() const
{
    return m_pos;
}

double AbstractActor::getRot() const
{
    return m_rot;
}

}
