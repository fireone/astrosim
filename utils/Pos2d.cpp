#include "Pos2d.h"

namespace utils
{

Pos2d::Pos2d()
: m_x( 0 )
, m_y( 0 )
{
}

double Pos2d::getX() const
{
    return m_x;
}

double Pos2d::getY() const
{
    return m_y;
}

}
