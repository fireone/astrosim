#ifndef _MODEL_ASTEROID_H_
#define _MODEL_ASTEROID_H_

#include "AbstractActor.h"

namespace model
{

namespace Utl = ::utils;

class Asteroid : public AbstractActor
{
public:

    Asteroid( long       id,
              Utl::Pos2d pos,
              double     rot );

    void update( double diff );

private:

    double x_step;

    double y_step;

    double rot_step;
};

}

#endif // _MODEL_ASTEROID_H_
