#ifndef _UTILS_IOBSERVABLE_H_
#define _UTILS_IOBSERVABLE_H_

#include "IObserver.h"

namespace utils
{

class IObservable
{
public:
    virtual ~IObservable(){}

    virtual void addObserver( IObserver* pObserver ) = 0;
};

}

#endif // _UTILS_IOBSERVABLE_H_
