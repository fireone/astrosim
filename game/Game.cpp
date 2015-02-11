#include "Game.h"

namespace game
{

Game::Game()
: m_apModel( new Mdl::Model )
, m_apView( new Vw::View )
{
    m_apModel->addObserver( m_apView.get() );
}

void Game::start()
{

}

}
