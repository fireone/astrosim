#ifndef _COMMAND_COMMAND_H_
#define _COMMAND_COMMAND_H_

namespace command
{

class Command
{
public:
    Command( double thrust,
             double rotation,
             bool   doFire );

    double getThrust();

    double getRotation();

    bool getDoFire();

private:

    double m_thrust;

    double m_rotation;

    bool m_doFire;
};

}

#endif // _COMMAND_COMMAND_H_
