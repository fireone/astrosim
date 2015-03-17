#ifndef _MODEL_MODEL_H_
#define _MODEL_MODEL_H_

#include <vector>
#include <utility>
#include "utils/IObservable.h"
#include "AI.h"
#include "IActor.h"
#include "command/Command.h"
#include "utils/Event.h"

namespace model
{

namespace Utl = ::utils;
namespace Cmd = ::command;

class Model : public Utl::IObservable
{
public:

    Model( double worldWidth, double worldHeight );

    //! Updates the model
    void update( double diff );

    //! Add an observer to the model
    void addObserver( Utl::IObserver *pObserver );

    void addShip( double x, double y, double rot );

    bool isRunning();

private:

    ::std::vector<Utl::IObserver*> m_observers;

    ::std::vector<IActorSP> m_actors;

    const double m_worldWidth;

    const double m_worldHeight;

    void notify( const IActorSP& spActor, Utl::Event event );

    long getId();

};

}

#endif // _MODEL_MODEL_H_
