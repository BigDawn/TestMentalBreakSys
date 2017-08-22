#ifndef MENTALSYSTEM_H
#define MENTALSYSTEM_H

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
    std::string killEnemy(CharacterObject npc);
    void friendlyDied(CharacterObject npcDead, CharacterObject npcAffected);
};

#endif // MENTALSYSTEM_H
