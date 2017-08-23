#ifndef TESTSUBJECTOR_H
#define TESTSUBJECTOR_H

#include <characterobject.h>
#include <iostream>
#include <string>
#include <vector>

#include "mentalsystem.h"

///
/// \class testSubjector
/// \brief The testSubjector class for subjecting NPCs
/// \details class main uses to test different conditions against the mental system of the NPCs.
/// Will not be in the main program.
class testSubjector
{
public:
    testSubjector();
    void bullet(CharacterObject *character);

    //variables
    std::vector<CharacterObject*> vNPCs;

private:
    void damageCalculationBullet(CharacterObject *character);
    void mentalSystemAction(CharacterObject character, MentalSystem::TypeOfAction typeAct);

    //variables
    MentalSystem mentalSys;
};

#endif // TESTSUBJECTOR_H
