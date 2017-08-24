#ifndef MENTALSYSTEMENEMY_H
#define MENTALSYSTEMENEMY_H

#include <vector>

#include "characterenemy.h"
#include "globalenums.h"


class MentalSystemEnemy
{
public:
    MentalSystemEnemy();    
    void setRefreshNpcList( std::vector<CharacterEnemy*> mainEnemyNpcList );
    void sortReactionFromAction(CharacterEnemy npcActedUpon, TypeOfAction typeActEnum);

private:
    CharacterEnemy* getNearestAlly();
    void killEnemy(CharacterEnemy npc);
    void deadFriendly(CharacterEnemy npcDead);

    //variables
    std::vector<CharacterEnemy*> vMentalEnemyNPCs;

};

#endif // MENTALSYSTEMENEMY_H
