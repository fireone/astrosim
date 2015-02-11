#ifndef _UTILS_IOBSERVER_H_
#define _UTILS_IOBSERVER_H_

namespace utils
{

class IObserver
{
public:

    virtual ~IObserver(){}

    virtual void update() = 0;
};

}

#endif // _UTILS_IOBSERVER_H_
