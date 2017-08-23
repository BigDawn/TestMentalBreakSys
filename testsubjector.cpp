#include "testsubjector.h"

///////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief testSubjector::testSubjector
/// \details Constructor for Subjector
testSubjector::testSubjector()
{
    std::cout<< "Subjector Online" <<std::endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief testSubjector::bullet
/// \param character
/// \details Simulates a bullet hitting an enemy
void testSubjector::bullet(CharacterObject *character)
{
    damageCalculationBullet(character);
    std::cout<< "Enemy Health: " << character->health <<std::endl;

    if(character->health<0)
    {
        character->isDead = true;
        std::cout<< character->getName() << " died!" <<std::endl;
        mentalSystemAction(*character, MentalSystem::friendlyDied);
    }
    else
    {
        mentalSystemAction(*character, MentalSystem::injuredByBullet);
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief testSubjector::damageCalculationBullet
/// \param character
/// \details Performs the damage calculations for a bullet hitting a character
void testSubjector::damageCalculationBullet(CharacterObject *character)
{
    int inDam = 10;
    std::cout<< "Damage input: " <<std::endl;
    //std::cin >> inDam;
    character->health -= inDam;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
void testSubjector::mentalSystemAction(CharacterObject character, MentalSystem::TypeOfAction typeAct)
{
    mentalSys.setRefreshNpcList( this->vEnemyNPCs );
    mentalSys.sortReactionFromAction(character, typeAct);
}
