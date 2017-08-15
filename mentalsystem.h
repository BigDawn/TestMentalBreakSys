#ifndef MENTALSYSTEM_H
#define MENTALSYSTEM_H
using namespace std;

#include <string>
#include <iostream>

#include "characterobject.h"

class MentalSystem
{
public:
    MentalSystem();
    string killEnemy(CharacterObject npc);
    string friendlyDied(CharacterObject npc);
};

#endif // MENTALSYSTEM_H
