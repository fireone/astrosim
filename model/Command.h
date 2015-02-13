#ifndef _MODEL_COMMAND_H_
#define _MODEL_COMMAND_H_

namespace model
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

#endif // _MODEL_COMMAND_H_
