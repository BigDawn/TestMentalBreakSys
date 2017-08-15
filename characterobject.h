#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include <string>

class CharacterObject
{
public:
    CharacterObject(int iniMentalStrength, std::string Name);
    int getMentalLevel();
    std::string getName();

private:
     int mentalStrength;
     std::string characterName;
};

#endif // CHARACTEROBJECT_H
