#ifndef _MODEL_ISHIP_H_
#define _MODEL_ISHIP_H_

#include <memory>
#include "Environment.h"
#include "Command.h"

namespace model
{

class IShip
{
public:
    ~IShip(){}

    virtual Command requestCmd( const Environment& env ) = 0;
};

typedef ::std::shared_ptr<IShip> IShipSP;

}

#endif // _MODEL_ISHIP_H_
