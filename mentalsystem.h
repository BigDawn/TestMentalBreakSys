#ifndef MENTALSYSTEM_H
#define MENTALSYSTEM_H
using namespace std;

#include <string>
#include <iostream>

#include "characterobject.h"

///
/// \class MentalSystem
/// \brief Testing Systems related to Mental Strength
/// \details Models the system that will evaluate a character's mental strength to react to various situations
///
class MentalSystem
{
public:
    MentalSystem();
    string killEnemy(CharacterObject npc);
    string friendlyDied(CharacterObject npc);
};

#endif // MENTALSYSTEM_H
