#include "mentalsystemenemy.h"

MentalSystemEnemy::MentalSystemEnemy()
{
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
    return vMentalEnemyNPCs[2];
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
        deadFriendlySeenByRadical(npcDead, *npcAffected);
        break;
    case SJW:
        deadFriendlySeenBySJW(npcDead, *npcAffected);
        break;
    case Apologist:
        deadFriendlySeenByApologist(npcDead, *npcAffected);
        break;
    default:
        break;
     }

}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::deadFriendlySeenByApologist
/// \details Apologist reactions to dead friendlies
void MentalSystemEnemy::deadFriendlySeenByApologist(CharacterEnemy dead, CharacterEnemy affected)
{
    std::string sDeadRad = affected.getName() + " runs over to " + dead.getName() + " and tries desperately to revive her";
    std::string sDeadApolo = affected.getName() + " says \"Oh god, we're getting killed, how did I wind up here?!\", trying desperately to revive " + dead.getName();
    std::string sDeadSJW = affected.getName() + " says \"That's so horrible but...I think I'll get screeched at if I show that affected me.\"";

    switch (dead.getTypeOfEnemy())
    {
    case Apologist:
        std::cout<< sDeadApolo <<std::endl;
        break;
    case Radical:
        std::cout<< sDeadRad <<std::endl;
        break;
    case SJW:
        std::cout<< sDeadSJW <<std::endl;
        break;
    default:
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::deadFriendlySeenByRadical
/// \details Apologist reactions to dead friendlies
void MentalSystemEnemy::deadFriendlySeenByRadical(CharacterEnemy dead, CharacterEnemy affected)
{
    std::string sDeadRad = affected.getName() + " runs over to " + dead.getName() + " and tries desperately to revive her";
    std::string sDeadApolo = affected.getName() + " says \"Meh, just some normie, no great loss.\"";
    std::string sDeadSJW = affected.getName() + " screeches \"They were fucking CIS scum anyway!\"";

    switch (dead.getTypeOfEnemy())
    {
    case Apologist:
        std::cout<< sDeadApolo <<std::endl;
        break;
    case Radical:
        std::cout<< sDeadRad <<std::endl;
        break;
    case SJW:
        std::cout<< sDeadSJW <<std::endl;
        break;
    default:
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystemEnemy::deadFriendlySeenBySJW
/// \details Apologist reactions to dead friendlies
void MentalSystemEnemy::deadFriendlySeenBySJW(CharacterEnemy dead, CharacterEnemy affected)

{
    std::string sDeadRad = affected.getName() + " runs over to " + dead.getName() + " and tries desperately to revive her";
    std::string sDeadApolo = affected.getName() + " tries desperately to revive " + dead.getName();
    std::string sDeadSJW = affected.getName() + " screeches \"They were fucking CIS scum anyway!\"";

    switch (dead.getTypeOfEnemy())
    {
    case Apologist:
        std::cout<< sDeadApolo <<std::endl;
        break;
    case Radical:
        std::cout<< sDeadRad <<std::endl;
        break;
    case SJW:
        std::cout<< sDeadSJW <<std::endl;
        break;
    default:
        break;
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


