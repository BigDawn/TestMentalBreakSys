#ifndef MENTALSYSTEM_H
#define MENTALSYSTEM_H

#include <string>
#include <iostream>
#include <vector>

#include "characterenemy.h"
#include "globalenums.h"
#include "mentalsystemenemy.h"

///
/// \class MentalSystem
/// \brief Testing Systems related to Mental Strength
/// \details Models the system that will evaluate a character's mental strength to react to various situations
///
class MentalSystem
{
public:
    //variabes

    //methods
    MentalSystem();
    void controllerMental(CharacterEnemy npcActedUpon, TypeOfAction typeActEnum, std::vector<CharacterEnemy*> listChars);
    //void controllerMental(CharacterFriendly npcActedUpon, TypeOfAction typeActEnum);

private:

    //variables
    MentalSystemEnemy mentalEnemy;

};

#endif // MENTALSYSTEM_H
