#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include <string>
#include <iostream>
#include <fstream>

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
    std::string possibleNames[3];

    //methods
    std::string christenedName();
    void populateNamesArray();
};

#endif // CHARACTEROBJECT_H
