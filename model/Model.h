#ifndef _MODEL_MODEL_H_
#define _MODEL_MODEL_H_

#include <vector>
#include <utility>
#include "utils/IObservable.h"
#include "IShip.h"
#include "Command.h"

namespace model
{

namespace Utl = ::utils;

class Model : public Utl::IObservable
{
public:

    Model();

    //! Updates the model
    void update(double diff);

    //! Add an observer to the model
    void addObserver( Utl::IObserver *pObserver );

    //! Add a ship to the model.
    //! Ownership assumed.
    void addShip( IShip* pShip );

    bool isRunning();

private:

    ::std::vector<Utl::IObserver*> m_observers;

    ::std::vector<IShipSP> m_ships;

    ::std::vector<::std::pair<Command, IShipSP>> m_commands;

    void notify();

};

}

#endif // _MODEL_MODEL_H_
