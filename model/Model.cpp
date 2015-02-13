#include "Model.h"
#include "Environment.h"

namespace model
{

Model::Model()
: m_observers()
, m_ships()
, m_commands()
{
}

void Model::addObserver( Utl::IObserver *pObserver )
{
    m_observers.push_back( pObserver );
}

void Model::addShip( IShip *pShip )
{
    m_ships.push_back( IShipSP( pShip ) );
}

bool Model::isRunning()
{
    return true;
}

void Model::notify()
{
    for( Utl::IObserver* pObserver : m_observers )
    {
        pObserver->notify();
    }
}

void Model::update( double diff )
{
    using namespace ::std;

    Environment env;

    for( IShipSP ship : m_ships )
    {
        m_commands.push_back( make_pair( ship->requestCmd( env ), ship ) );
    }

    for( pair<Command, IShipSP> cmdPair : m_commands )
    {

    }
}

}
