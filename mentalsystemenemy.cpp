#include "mentalsystemenemy.h"

MentalSystemEnemy::MentalSystemEnemy()
{
    std::cout<< " Enemy ";
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::sortReactionFromAction
/// \param npcActedUpon
/// \param typeActEnum
/// \details controls the reation of the NPC mental system using the
/// TypeOfAction to mete out the response
void MentalSystemEnemy::sortReactionFromAction(CharacterEnemy npcActedUpon, TypeOfAction typeActEnum)
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
/// \brief MentalSystemEnemy::getNearestEnemy
/// \return nearest ally pointer
/// \details gets the nearest enemy ally
CharacterEnemy* MentalSystemEnemy::getNearestAlly()
{
    return vMentalEnemyNPCs[0];
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::friendlyDied
/// \param npc
/// \details npc reacts to a dead friendly npc
void MentalSystemEnemy::deadFriendly(CharacterEnemy npcDead)
{
    CharacterEnemy* npcAffected = getNearestAlly();

    //reactions of...
    switch(npcAffected->getTypeOfEnemy())
    {
    case Radical:
        break;
    case SJW:
        break;
    case Apologist:
        break;
    default:
        break;
     }



    if(npcDead.getTypeOfEnemy() == EnemyType::Radical)
    {
        std::cout<< npcAffected->getName() << " runs over to " << npcDead.getName() << " and tries desperately to revive her" <<std::endl;

    }
    else
    {
        std::cout<< npcAffected->getName() << " runs over to " << npcDead.getName() << " and tries desperately to revive them" <<std::endl;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::setRefreshNpcList
/// \details Syncs the mental System NPC list with the main one
void MentalSystemEnemy::setRefreshNpcList(std::vector<CharacterEnemy*> mainEnemyNpcList)
{
    this->vMentalEnemyNPCs.clear();
    this->vMentalEnemyNPCs = mainEnemyNpcList;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::killEnemy
/// \param npc
/// \return
/// \details
void MentalSystemEnemy::killEnemy(CharacterEnemy npc)
{
    std::cout<< npc.getName() << " snarks: \"Hehe, got heem!\" " << std::endl;
}


