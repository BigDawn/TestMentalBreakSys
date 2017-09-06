#include "characterobject.h"

CharacterObject::CharacterObject(int iniMentalStrength, std::string Name)
{
    this->isDead = false;
    this->mentalStrength = iniMentalStrength;
    this->characterName = Name;
    this->genderAssigned = IsASocialConstruct; //default
    this->setBreastSize(BreastSize::C); //default
    setInitialHealth();
    defaultEquipment();
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

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getName
/// \return Name of the Character
/// \details Returns the (randomnly unless male) given breast size of an NPC
BreastSize CharacterObject::getBreastSize()
{
    return this->breastSize;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::equipItem
/// \param item
/// \param itemDescrip
/// \details equips the given item description into the given item slot
void CharacterObject::equipItem(EquipmentType item, std::string itemDescrip)
{
    equipment[item] = itemDescrip;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::setBreastSize
/// \param Breast Size b
/// \details equips the npc with the given BreastSize b
void CharacterObject::setBreastSize(BreastSize b)
{
    this->breastSize = b;
}
