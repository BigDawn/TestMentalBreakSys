#include "mentalsystem.h"

MentalSystem::MentalSystem()
{
    std::cout << "Mental System online!" << std::endl;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief MentalSystem::controllerMental
/// \param npcActedUpon
/// \param typeActEnum
/// \details sends enemy to its mental system
void MentalSystem::controllerMental(CharacterEnemy npcActedUpon, TypeOfAction typeActEnum, std::vector<CharacterEnemy*> listChars)
{
    mentalEnemy.setRefreshNpcList(listChars);
    mentalEnemy.sortReactionFromAction(npcActedUpon, typeActEnum);
}

