#include <chrono>
#include "Game.h"

namespace game
{

enum constants
{
    TIME_STEP = 100
};

Game::Game()
: m_apModel( new Mdl::Model( 1, 0.5625 ) )
, m_apView( new Vw::View( 800, 450, "Astro Sim" ) )
{
    m_apModel->addObserver( m_apView.get() );
}

void Game::start()
{
    using namespace ::std::chrono;

    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    duration<double> diff = duration_cast<duration<double>>( t2 - t1 );

    m_apModel->addShip( 0,0,0 );

    size_t i( 1 );

    while( m_apModel->isRunning() )
    {
        m_apModel->update( diff.count() / TIME_STEP );

        m_apView->update();

        if( ++i > TIME_STEP )
        {
            i = 1;

            t1 = t2;
            t2 = high_resolution_clock::now();

            diff = duration_cast<duration<double>>( t2 - t1 );
        }
    }
}

}
