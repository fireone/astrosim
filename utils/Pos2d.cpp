#include "Pos2d.h"

namespace utils
{

Pos2d::Pos2d()
: m_x( 0 )
, m_y( 0 )
{
}

Pos2d::Pos2d(double x, double y)
: m_x( x )
, m_y( y )
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

void Pos2d::moveX( double x )
{
    m_x += x;
}

void Pos2d::moveY( double y )
{
    m_y += y;
}

}
