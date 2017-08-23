#include "mentalsystem.h"

MentalSystem::MentalSystem()
{
    std::cout << "Mental System online!" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::sortReactionFromAction
/// \param npcActedUpon
/// \param typeActEnum
/// \details controls the reation of the NPC mental system using the
/// TypeOfAction to mete out the response
void MentalSystem::sortReactionFromAction(CharacterObject npcActedUpon, MentalSystem::TypeOfAction typeActEnum)
{
    switch(typeActEnum)
    {
    case enemyKilled:
        killEnemy(npcActedUpon);
        break;
    case friendlyDied:
        deadFriendly(npcActedUpon);
        break;
    case injuredByBullet:
        std::cout<< npcActedUpon.getName() << " says \"Ouch\"!" <<std::endl;
        break;
    default:
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::getNearestEnemy
/// \return nearest enemy pointer
/// \details gets the nearest enemy
CharacterObject* MentalSystem::getNearestEnemy()
{
    return vMentalEnemyNPCs[0];
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::friendlyDied
/// \param npc
/// \details npc reacts to a dead friendly npc
void MentalSystem::deadFriendly(CharacterObject npcDead)
{
    CharacterObject* npcAffected = getNearestEnemy();
    if(npcDead.isDead)//.getTypeOfEnemy() == EnemyType::Feminista)
    {
        std::cout<< npcAffected->getName() << " runs over to " << npcDead.getName() << " and tries desperately to revive her" <<std::endl;

    }
    else
    {
        std::cout<< npcAffected->getName() << " runs over to " << npcDead.getName() << " and tries desperately to revive them" <<std::endl;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::setRefreshNpcList
/// \details Syncs the mental System NPC list with the main one
void MentalSystem::setRefreshNpcList(std::vector<CharacterEnemy*> mainEnemyNpcList)
{
    this->vMentalEnemyNPCs.clear();
    this->vMentalEnemyNPCs = mainEnemyNpcList;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::killEnemy
/// \param npc
/// \return
/// \details
void MentalSystem::killEnemy(CharacterObject npc)
{
    std::cout<< npc.getName() << " snarks: \"Hehe, got heem!\" " << std::endl;
}

