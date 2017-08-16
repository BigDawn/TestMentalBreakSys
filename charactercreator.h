#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <random>
#include <characterobject.h>
#include <chrono>

class CharacterCreator
{
public:
    CharacterCreator();
    CharacterObject createNPC();

private:
    std::default_random_engine generator;               //used by mentalStrengthGenerator
    std::uniform_int_distribution<int> distribution;    //used by mentalStrengthGenerator
    //methods
    int mentalStrengthGenerator();  //uses private variables generator and distribution
};

#endif // CHARACTERCREATOR_H
