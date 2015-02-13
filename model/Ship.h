#ifndef _MODEL_SHIP_H_
#define _MODEL_SHIP_H_

#include "IShip.h"

namespace model
{

class Ship : public IShip
{
public:
    Command requestCmd(const Environment &env);
};

}

#endif // _MODEL_SHIP_H_
