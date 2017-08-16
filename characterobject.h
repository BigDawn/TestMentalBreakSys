#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include <string>
#include <iostream>
#include <array>

class CharacterObject
{
public:
    //methods
    CharacterObject(int iniMentalStrength, std::string Name);
    int getMentalLevel();
    std::string getName();

private:
    //variables
    int mentalStrength;
    int armourRating;
    int health;
    int damageRating;
    std::string characterName;
    std::array<std::string, 3> possibleNames;

    //methods
    std::string christenedName();
};

#endif // CHARACTEROBJECT_H
