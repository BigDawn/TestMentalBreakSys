#ifndef TESTSUBJECTOR_H
#define TESTSUBJECTOR_H

#include <characterenemy.h>
#include <iostream>
#include <string>
#include <vector>

#include "mentalsystem.h"

///
/// \class testSubjector
/// \brief The testSubjector class for subjecting NPCs
/// \details class main uses to test different conditions against the mental system of the NPCs.
/// Will not be in the main program.
template <class tNpc> class testSubjector
{
public: 
  testSubjector()
    {std::cout<< "Subjector Online" <<std::endl;}
  void bullet(tNpc *character);

  //variables
  std::vector<tNpc*> vEnemyNPCs;

private:
  //variables
  MentalSystem mentalSys;

  //methods
  void damageCalculationBullet(tNpc *character);
  void mentalSystemAction(tNpc character, MentalSystem::TypeOfAction typeAct);
};

///////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief testSubjector::bullet
/// \param character
/// \details Simulates a bullet hitting an enemy
template <class tNpc> void testSubjector<tNpc>::bullet(tNpc *character)
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
template <class tNpc> void testSubjector<tNpc>::damageCalculationBullet(tNpc *character)
{
    int inDam = 102;
    std::cout<< "Damage input: " <<std::endl;
    //std::cin >> inDam;
    character->health -= inDam;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
template <class tNpc> void testSubjector<tNpc>::mentalSystemAction(tNpc character, MentalSystem::TypeOfAction typeAct)
{
    mentalSys.setRefreshNpcList( this->vEnemyNPCs );
    mentalSys.sortReactionFromAction(character, typeAct);
}


#endif //TESTSUBJECTOR_H
