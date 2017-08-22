#include "testsubjector.h"

testSubjector::testSubjector()
{
    std::cout<< "Subjector Online" <<std::endl;
}

void testSubjector::bullet(/*int damage,*/ CharacterObject *character)
{
    int inDam = 0;
    std::cout<< "Damage input: " <<std::endl;
    std::cin >> inDam;
    character->health -= inDam;
}
