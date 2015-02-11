#ifndef _MODEL_MODEL_H_
#define _MODEL_MODEL_H_

#include "utils/IObservable.h"

namespace model
{

namespace Utl = ::utils;

class Model : public Utl::IObservable
{
public:
    void addObserver( Utl::IObserver *pObserver );
};

}

#endif // _MODEL_MODEL_H_
