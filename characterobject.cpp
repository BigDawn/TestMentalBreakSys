#include "characterobject.h"

CharacterObject::CharacterObject(int iniMentalStrength, std::string Name)
{
    this->mentalStrength = iniMentalStrength;
    this->characterName = Name;
    this->typeOfEnemy = EnemyType::Feminista;
    this->health = 100;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getTypeOfEnemy
/// \return Type of enemy
/// \details There are a few classes of enemies, this is the class of current one
EnemyType CharacterObject::getTypeOfEnemy()
{
    return this->typeOfEnemy;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getMentalLevel
/// \return Mental level of specified character
/// \details Returns the randomnly generated mental level of an NPC
int CharacterObject::getMentalLevel()
{
    return this->mentalStrength;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getName
/// \return Name of the Character
/// \details Returns the randomnly given character name of an NPC
std::string CharacterObject::getName()
{
    return this->characterName;
}
