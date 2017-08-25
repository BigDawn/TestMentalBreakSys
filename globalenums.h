#ifndef GLOBALENUMS_H
#define GLOBALENUMS_H

///
/// \brief The BreastSize enum
/// \details Character Model tits size
enum BreastSize
{
    man,
    AA,
    A,
    B,
    C,
    D,
    DD,
    E,
    EE,
};

enum EquipmentType
{
    Headgear = 1,
    Eyewear = 2,
    NeckAccessory = 3,
    Top = 4,
    Bottoms = 5,
    Footwear = 6,
    Weapon = 7,
};

///
/// \brief The Gender enum
/// \details Character Model gender
enum Gender
{
    Male,
    Female,
    IsASocialConstruct,
};

///
/// \brief The TypeOfAction enum
/// \details Actions performed on characters
enum TypeOfAction
{
    enemyKilled,
    friendlyDied,
    injuredByBullet,
};

#endif // GLOBALENUMS_H
