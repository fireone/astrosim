#include "Model.h"
#include "Environment.h"
#include "Ship.h"
#include "SimpleCommandGenerator.h"

namespace model
{

Model::Model( double worldWidth, double worldHeight )
: m_observers()
, m_actors()
, m_worldWidth( worldWidth )
, m_worldHeight( worldHeight )
{
}

void Model::addObserver( Utl::IObserver *pObserver )
{
    m_observers.push_back( pObserver );
}

void Model::addShip( double x, double y, double rot )
{
    IActorSP spActor( new Ship( getId(), Utl::Pos2d( x, y ), rot, new SimpleCommandGenerator ) );

    m_actors.push_back( spActor );

    notify( spActor, Utl::NEW_SHIP );
}

bool Model::isRunning()
{
    return true;
}

void Model::notify( const IActorSP& spActor, Utl::Event event )
{
    for( Utl::IObserver* pObserver : m_observers )
    {
        pObserver->notify( spActor, event );
    }
}

long Model::getId()
{
    static long id( 0 );

    return ++id;
}

void Model::update( double diff )
{
    using namespace ::std;

    Environment env;

    for( IActorSP actor : m_actors )
    {
        actor->update( diff );
    }
}

}
