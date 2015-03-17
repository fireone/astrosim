#ifndef _VIEW_VIEW_H_
#define _VIEW_VIEW_H_

#include "SDL2/SDL.h"
#include "utils/IObserver.h"
#include "IDrawable.h"
#include <vector>
#include "model/IActor.h"

namespace view
{

namespace Utl = ::utils;
namespace Mdl = ::model;

class View : public Utl::IObserver
{
public:

    View(int width, int height , const char *name);

    ~View();

    void update();

    void notify( const Mdl::IActorSP spActor, Utl::Event event );

private:

    SDL_Window* m_pWin;

    SDL_Renderer* m_pRenderer;

    ::std::vector<IDrawableSP> m_drawables;

    void setupView(int width, int height , const char *name);

    void addShip( const Mdl::IActorSP& spActor );
};

}

#endif // _VIEW_VIEW_H_
