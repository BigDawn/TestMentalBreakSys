#ifndef CHARACTERENEMY_H
#define CHARACTERENEMY_H

#include "characterobject.h"

enum EnemyType
{
    Radical,
    SJW,
    Apologist
};

/// \class CharacterEnemy
/// \brief The CharacterEnemy class
/// \details Enemy NPC
class CharacterEnemy : public CharacterObject
{
public:
    CharacterEnemy(int iniMentalStrength, std::string Name, EnemyType typeEnemy);
    EnemyType getTypeOfEnemy();

private:
    EnemyType typeOfEnemy;
    int zeal;
};

#endif // CHARACTERENEMY_H
