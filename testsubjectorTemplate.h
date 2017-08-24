#ifndef TESTSUBJECTOR_H
#define TESTSUBJECTOR_H

#include <characterenemy.h>
#include <iostream>
#include <string>
#include <vector>

#include "globalenums.h"
#include "mentalsystem.h"

///
/// \class testSubjector
/// \brief The testSubjector template class for subjecting NPCs
/// \tparam Type of NPC to be subjected
/// \details class main uses to test different conditions against the mental system of the NPCs.
/// Will not be in the main program.
template <class tNpc> class testSubjector
{
public: 
  testSubjector()
    {std::cout<< "Subjector Online" <<std::endl;}
  void bullet(tNpc *character);

  //variables
  std::vector<tNpc*> vListNPCs;

private:
  //variables
  MentalSystem mentalSys;

  //methods
  void damageCalculationBullet(tNpc *character);
  void mentalSystemAction(tNpc character, TypeOfAction typeAct);
};

///////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief testSubjector::bullet
/// \tparam Type of NPC to be subjected
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
        mentalSystemAction(*character, friendlyDied);
    }
    else
    {
        mentalSystemAction(*character, injuredByBullet);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief testSubjector::damageCalculationBullet
/// \tparam Type of NPC to be subjected
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
/// \brief Mental System call
/// \tparam Type of NPC to be subjected
/// \param Character to be subjected
/// \param Type of action subjected upon character
/// \details May move to main, mentalSystem will be called by game eventually
template <class tNpc> void testSubjector<tNpc>::mentalSystemAction(tNpc character, TypeOfAction typeAct)
{
    mentalSys.controllerMental(character, typeAct, this->vListNPCs);
}


#endif //TESTSUBJECTOR_H
