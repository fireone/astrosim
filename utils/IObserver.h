#ifndef _UTILS_IOBSERVER_H_
#define _UTILS_IOBSERVER_H_

#include "Event.h"
#include "model/IActor.h"

namespace utils
{

namespace Mdl = ::model;

class IObserver
{
public:

    virtual ~IObserver(){}

    virtual void notify( const Mdl::IActorSP spActor, Event event ) = 0;
};

}

#endif // _UTILS_IOBSERVER_H_
