#ifndef _MODEL_ABSTRACT_ACTOR_H_
#define _MODEL_ABSTRACT_ACTOR_H_

#include "IActor.h"
#include "utils/Pos2d.h"

namespace model
{

namespace Utl = ::utils;

class AbstractActor : public IActor
{
public:

    AbstractActor( long               id,
                   Utl::Pos2d         pos,
                   double             rot );

    long getId() const;

    Utl::Pos2d getPos() const;

    double getRot() const;

protected:

    long m_id;

    Utl::Pos2d m_pos;

    double m_rot;
};

}

#endif // _MODEL_ABSTRACT_ACTOR_H_
