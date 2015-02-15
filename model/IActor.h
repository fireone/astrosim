#ifndef _MODEL_IACTOR_H_
#define _MODEL_IACTOR_H_

#include <memory>
#include "utils/Pos2d.h"

namespace model
{

namespace Utl = ::utils;

class IActor
{
public:
    ~IActor(){}

    virtual void update( double diff ) = 0;

    virtual long getId() const = 0;

    virtual Utl::Pos2d getPos() const = 0;

    virtual double getRot() const = 0;
};

typedef ::std::shared_ptr<IActor> IActorSP;

}

#endif // _MODEL_IACTOR_H_
