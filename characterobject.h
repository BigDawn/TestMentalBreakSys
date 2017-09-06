#ifndef CHARACTEROBJECT_H
#define CHARACTEROBJECT_H

#include <string>
#include <iostream>
#include <unordered_map>

#include "globalenums.h"

///
/// \class CharacterObject
/// \brief Model class for an NPC
/// \details Models a character in the game, holding stats etc.
///
class CharacterObject
{

public:
    //variables
    bool isDead;
    int currentHealth;
    std::unordered_map<int, std::string> equipment; //Equipment

    //methods
    CharacterObject(int iniMentalStrength, std::string Name);
        // //getters
        int getMentalLevel();
        std::string getName();
        BreastSize getBreastSize();
        ///
        /// \brief getGender
        /// \return gender
        /// \details Returns gender, used a lot so is inline
        inline Gender getGender()
        {
            return this->genderAssigned;
        }


    //setters
    void equipItem(EquipmentType item, std::string itemDescrip);
    void setBreastSize( BreastSize b );
    ///
    /// \brief assignGender
    /// \param g
    /// \details Changes Gender to gender type 'g'
    inline void assignGender( Gender g )
    {
        this->genderAssigned = g;
    }

private:
    //Character Description
    std::string characterName;
    BreastSize breastSize;
    Gender genderAssigned;

    //Character Stats
    int armourRating;
    int damageRating;
    int maxHealth = 100;
    int mentalStrength;

    //methods
    void defaultEquipment()
    {
        equipment.insert( { Headgear, "Nothing" } );
        equipment.insert( { Eyewear, "Nothing" } );
        equipment.insert( { NeckAccessory, "Nothing" } );
        equipment.insert( { Top, "Nothing" } );
        equipment.insert( { Bottoms, "Nothing" } );
        equipment.insert( { Footwear, "Nothing" });
        equipment.insert( { Weapon, "Nothing" });
    }

    void setInitialHealth()
    {
        this->currentHealth = this->maxHealth;
    }

};

#endif // CHARACTEROBJECT_H
