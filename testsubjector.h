#ifndef TESTSUBJECTOR_H
#define TESTSUBJECTOR_H

#include <characterobject.h>
#include <iostream>
#include <string>

///
/// \class testSubjector
/// \brief The testSubjector class for subjecting NPCs
/// \details class main uses to test different conditions against the mental system of the NPCs.
/// Will not be in the main program.
class testSubjector
{
public:
    testSubjector();
    void bullet(/*int damage,*/ CharacterObject *character);
};

#endif // TESTSUBJECTOR_H
