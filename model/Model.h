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

    Model();

    //! Updates the model
    void update( double diff );

    //! Add an observer to the model
    void addObserver( Utl::IObserver *pObserver );

    void addShip( double x, double y, double rot );

    bool isRunning();

private:

    ::std::vector<Utl::IObserver*> m_observers;

    ::std::vector<IActorSP> m_actors;

    void notify( const IActorSP& spActor, Utl::Event event );

    long getId();

};

}

#endif // _MODEL_MODEL_H_
