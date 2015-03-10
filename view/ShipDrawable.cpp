#include "ShipDrawable.h"
#include "SDL2/SDL_image.h"

namespace view
{

using namespace Mdl;

ShipDrawable::ShipDrawable( SDL_Renderer *pRenderer,
                            const IActorSP& spActor )
: m_pRenderer( pRenderer )
, m_spActor( spActor )
, m_pImg( nullptr )
, texr()
{
    m_pImg = IMG_LoadTexture( m_pRenderer, "../../resources/ship.png" );

    int w, h;

    SDL_QueryTexture(m_pImg, NULL, NULL, &w, &h); // get the width and height of the texture

    // put the location where we want the texture to be drawn into a rectangle
    // I'm also scaling the texture 2x simply by setting the width and height


    texr.w = w;
    texr.h = h;

}

ShipDrawable::~ShipDrawable()
{
    SDL_DestroyTexture( m_pImg );
}

void ShipDrawable::draw()
{
    SDL_RenderCopyEx( m_pRenderer, m_pImg, NULL, &texr, m_spActor->getRot(), NULL, SDL_FLIP_NONE );
}

}
