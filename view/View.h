#ifndef _VIEW_VIEW_H_
#define _VIEW_VIEW_H_

#include "SDL2/SDL.h"
#include "utils/IObserver.h"

namespace view
{

namespace Utl = ::utils;

class View : public Utl::IObserver
{
public:

    View();

    ~View();

    void update();

    void notify();

private:

    SDL_Window* m_pWin;
    SDL_Renderer* m_pRenderer;
    SDL_Texture* m_pImg;

    SDL_Rect texr;

    void setupView();
};

}

#endif // _VIEW_VIEW_H_
