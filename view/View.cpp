#include <string>
#include "View.h"
#include "SDL2/SDL_image.h"
#include "SDL2/SDL_surface.h"
#include <iostream>

#define WIDTH 800
#define HEIGHT 600

namespace view
{

View::View()
: m_pWin( nullptr )
, m_pRenderer( nullptr )
, m_pImg( nullptr )
, texr()
{
    setupView();
}

View::~View()
{
    SDL_DestroyTexture(m_pImg);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_DestroyWindow(m_pWin);
}

void View::update()
{

    static double angle(0);

    if(angle > 360) angle = 0;

    static int hej(0);

    static int pos(0);
            if( hej > 25 )
    {
        hej = 0;
        pos++;
    }


    if(pos > 600) pos = 0;

    texr.x =  pos;
    texr.y =  pos;

    // event handling
    SDL_Event e;
    if ( SDL_PollEvent(&e) ) {
        if (e.type == SDL_QUIT)
            exit(1);
        else if (e.type == SDL_KEYUP && e.key.keysym.sym == SDLK_ESCAPE)
            exit(1);
    }

    // clear the screen
    SDL_RenderClear(m_pRenderer);
    // copy the texture to the rendering context
    //SDL_RenderCopy(m_pRenderer, m_pImg, NULL, &texr);

    SDL_RenderCopyEx( m_pRenderer, m_pImg, NULL, &texr, angle, NULL, SDL_FLIP_NONE );
    // flip the backbuffer
    // this means that everything that we prepared behind the screens is actually shown
    SDL_RenderPresent(m_pRenderer);

    angle+=0.25;
    hej++;
}

void View::notify()
{

}

void View::setupView()
{
    // Initialize SDL.
        if (SDL_Init(SDL_INIT_VIDEO) < 0)
                exit(1);

        // create the window and renderer
        // note that the renderer is accelerated
        m_pWin = SDL_CreateWindow("Image Loading", 100, 100, WIDTH, HEIGHT, 0);
        m_pRenderer = SDL_CreateRenderer(m_pWin, -1, SDL_RENDERER_ACCELERATED);

        // load our image
        m_pImg = IMG_LoadTexture(m_pRenderer, "c:\\dev\\ship.png");

        int w, h;

        SDL_QueryTexture(m_pImg, NULL, NULL, &w, &h); // get the width and height of the texture

        // put the location where we want the texture to be drawn into a rectangle
        // I'm also scaling the texture 2x simply by setting the width and height


        texr.w = w*2;
        texr.h = h*2;

}

}
