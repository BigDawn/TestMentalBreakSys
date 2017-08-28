#include "characterenemy.h"

CharacterEnemy::CharacterEnemy(int iniMentalStrength, std::string Name, EnemyType typeEnemy) : CharacterObject(iniMentalStrength, Name)
{
    this->typeOfEnemy = typeEnemy;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getTypeOfEnemy
/// \return Type of enemy
/// \details There are a few classes of enemies, this is the class of current one
EnemyType CharacterEnemy::getTypeOfEnemy()
{
    return this->typeOfEnemy;
}
