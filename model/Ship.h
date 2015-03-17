#ifndef _MODEL_SHIP_H
#define _MODEL_SHIP_H

#include "AbstractActor.h"
#include "ICommandGenerator.h"

namespace model
{

namespace Utl = ::utils;

class Ship : public AbstractActor
{
public:

    Ship( long id, Utl::Pos2d pos, double rot, ICommandGenerator* pCmdGenerator );

    void update( double diff );

private:

    ::std::auto_ptr<ICommandGenerator> m_apCmdGenerator;
};

}

#endif // _MODEL_SHIP_H
