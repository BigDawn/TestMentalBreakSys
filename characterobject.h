#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include <string>
#include <iostream>
#include <array>

///
/// \class CharacterObject
/// \brief Model class for an NPC
/// \details Models a character in the game, holding stats etc.
///
class CharacterObject
{
public:
    //methods
    CharacterObject(int iniMentalStrength, std::string Name);
    int getMentalLevel();
    int health;
    std::string getName();

private:
    //variables
    int mentalStrength;
    int armourRating;
    int damageRating;
    std::string characterName;

};

#endif // CHARACTEROBJECT_H
