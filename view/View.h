#ifndef _VIEW_VIEW_H_
#define _VIEW_VIEW_H_

#include "utils/IObserver.h"

namespace view
{

class View : public ::utils::IObserver
{
public:

    void update();
};

}

#endif // _VIEW_VIEW_H_
