#ifndef _GAME_GAME_H_
#define _GAME_GAME_H_

#include <memory>
#include "model/Model.h"
#include "view/View.h"

namespace game
{

namespace Mdl = ::model;
namespace Vw = ::view;

class Game
{
public:
    Game();

    //! Start the game.
    void start();

private:
    ::std::auto_ptr<Mdl::Model> m_apModel;
    ::std::auto_ptr<Vw::View> m_apView;
};

}

#endif // _GAME_GAME_H_
