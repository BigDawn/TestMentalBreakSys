#ifndef MENTALSYSTEM_H
#define MENTALSYSTEM_H

#include <string>
#include <iostream>
#include <vector>

#include "characterobject.h"

///
/// \class MentalSystem
/// \brief Testing Systems related to Mental Strength
/// \details Models the system that will evaluate a character's mental strength to react to various situations
///
class MentalSystem
{
public:
    //variabes
    enum TypeOfAction
    {
        enemyKilled,
        friendlyDied,
        injuredByBullet,
    };

    //methods
    MentalSystem();
    void sortReactionFromAction(CharacterObject npcActedUpon, TypeOfAction typeActEnum);
    void setRefreshNpcList( std::vector<CharacterObject*> mainNpcList );


private:
    CharacterObject* getNearestEnemy();
    std::string killEnemy(CharacterObject npc);
    void deadFriendly(CharacterObject npcDead);

    //variables
    std::vector<CharacterObject*> vMentalNPCs;
};

#endif // MENTALSYSTEM_H
