#ifndef _VIEW_IDRAWABLE_H_
#define _VIEW_IDRAWABLE_H_

#include <memory>

namespace view
{

class IDrawable
{
public:
    virtual ~IDrawable() {}

    virtual void draw() = 0;
};

typedef ::std::shared_ptr<IDrawable> IDrawableSP;

}

#endif // _VIEW_IDRAWABLE_H_
