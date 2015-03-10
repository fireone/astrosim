#ifndef _VIEW_SHIPDRAWABLE_H_
#define _VIEW_SHIPDRAWABLE_H_

#include "SDL2/SDL_render.h"
#include "IDrawable.h"
#include "model/IActor.h"

namespace view
{

namespace Mdl = ::model;

class ShipDrawable : public IDrawable
{
public:
    ShipDrawable( SDL_Renderer*        pRenderer,
                  const Mdl::IActorSP& spActor );

    ~ShipDrawable();

    void draw();

private:

    SDL_Renderer* m_pRenderer;

    Mdl::IActorSP m_spActor;

    SDL_Texture* m_pImg;

    SDL_Rect texr;
};

}

#endif // _VIEW_SHIPDRAWABLE_H_
