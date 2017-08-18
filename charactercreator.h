#ifndef CHARACTERCREATOR_H
#define CHARACTERCREATOR_H

#include <random>
#include <characterobject.h>
#include <chrono>
#include <fstream>
#include <iostream>

///
/// \class CharacterCreator
/// \brief Character Creation controller
/// \details Controls the charater creation, making new characters when createNPC() is called.
/// It will pass generated parameters through to the character object it makes.
class CharacterCreator
{
public:
    CharacterCreator();
    CharacterObject createNPC();

private:
    //variables
    std::default_random_engine generator;               //used by mentalStrengthGenerator
    std::uniform_int_distribution<int> distribution;    //used by mentalStrengthGenerator
    std::vector<std::string> possibleFirstNames;
    std::vector<std::string> possibleSurnames;
    //methods
    bool populateNamesArray();
    int mentalStrengthGenerator();  //uses private variables generator and distribution
    std::string chooseRandomName(bool surname);

};

#endif // CHARACTERCREATOR_H
