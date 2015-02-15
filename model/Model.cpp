#include "Model.h"
#include "Environment.h"

namespace model
{

Model::Model()
: m_observers()
, m_actors()
, m_commands()
{
}

void Model::addObserver( Utl::IObserver *pObserver )
{
    m_observers.push_back( pObserver );
}

void Model::addActor( IActor *pActor )
{
    m_actors.push_back( IActorSP( pActor ) );
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

    for( IActorSP actor : m_actors )
    {
        actor->update( diff );
    }
}

}
