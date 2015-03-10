#ifndef _UTILS_POS2D_H_
#define _UTILS_POS2D_H_

namespace utils
{

class Pos2d
{
public:

    Pos2d();

    Pos2d( double x, double y );

    double getX() const;

    double getY() const;

private:
    double m_x;

    double m_y;
};

}

#endif // _UTILS_POS2D_H_
