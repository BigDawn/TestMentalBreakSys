#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <random>
#include <characterobject.h>
#include <chrono>
#include <fstream>
#include <iostream>

///
/// \brief The CharacterCreator class
/// \details Controls the charater creation, making new characters when createNPC is called
/// will choose a name and a mental strength level and pass it through to the character object
class CharacterCreator
{
public:
    CharacterCreator();
    CharacterObject createNPC();

private:
    //variables
    std::default_random_engine generator;               //used by mentalStrengthGenerator
    std::uniform_int_distribution<int> distribution;    //used by mentalStrengthGenerator
    std::vector<std::string> possibleNames;
    //methods
    int mentalStrengthGenerator();  //uses private variables generator and distribution
    bool populateNamesArray();
};

#endif // CHARACTERCREATOR_H
