#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <random>
#include <characterobject.h>
#include <chrono>
#include <fstream>
#include <iostream>

class CharacterCreator
{
public:
    CharacterCreator();
    CharacterObject createNPC();

private:
    //variables
    std::default_random_engine generator;               //used by mentalStrengthGenerator
    std::uniform_int_distribution<int> distribution;    //used by mentalStrengthGenerator
    std::array<std::string, 3> possibleNames;
    //methods
    int mentalStrengthGenerator();  //uses private variables generator and distribution
    void populateNamesArray();
};

#endif // CHARACTERCREATOR_H
