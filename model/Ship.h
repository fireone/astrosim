#ifndef _MODEL_SHIP_H
#define _MODEL_SHIP_H

#include "AbstractActor.h"

namespace model
{

namespace Utl = ::utils;

class Ship : public AbstractActor
{
public:

    Ship( long id, Utl::Pos2d pos, double rot );

    void update( double diff );
};

}

#endif // _MODEL_SHIP_H
