#include "mentalsystem.h"

MentalSystem::MentalSystem()
{
    std::cout << "Mental System online!" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::friendlyDied
/// \param npc
/// \return
/// \details
void MentalSystem::friendlyDied(CharacterObject npcDead, CharacterObject npcAffected)
{
    if(npcDead.getTypeOfEnemy() == EnemyType::Feminista)
    {
        std::cout<< npcAffected.getName() << " runs over to " << npcDead.getName() << " and tries desperately to revive her" <<std::endl;
    }
    else
    {
        std::cout<< npcAffected.getName() << " runs over to " << npcDead.getName() << " and tries desperately to revive them" <<std::endl;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::killEnemy
/// \param npc
/// \return
/// \details
std::string MentalSystem::killEnemy(CharacterObject npc)
{

}

