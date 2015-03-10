#include <string>
#include "View.h"
#include "SDL2/SDL_surface.h"
#include <iostream>
#include "ShipDrawable.h"

namespace view
{

using namespace Mdl;
using namespace Utl;

View::View( int width, int height )
: m_pWin( nullptr )
, m_pRenderer( nullptr )
, m_drawables()
{
    setupView( width, height );
}

View::~View()
{
    SDL_DestroyRenderer( m_pRenderer );
    SDL_DestroyWindow( m_pWin );
}

void View::update()
{
    SDL_Event e;

    if( SDL_PollEvent( & e) )
    {
        if( e.type == SDL_QUIT )
        {
            exit(1);
        }
        else if( e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE )
        {
            exit(1);
        }
    }

    SDL_RenderClear( m_pRenderer );

    for( IDrawableSP spDrawable : m_drawables )
    {
        spDrawable->draw();
    }

    SDL_RenderPresent( m_pRenderer );
}

void View::notify( const IActorSP spActor, Event event )
{
    switch( event )
    {
        case NEW_SHIP:
            addShip( spActor );
        break;

        default:
            //do nothing
        break;
    }
}

void View::setupView( int width, int height )
{
    if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        exit( 1 );
    }

    m_pWin = SDL_CreateWindow( "Astro Sim", 50, 50, width, height, 0 );

    m_pRenderer = SDL_CreateRenderer( m_pWin, -1, SDL_RENDERER_ACCELERATED );
}

void View::addShip( const IActorSP& spActor )
{
    m_drawables.push_back( IDrawableSP( new ShipDrawable( m_pRenderer, spActor ) ) );
}

}
