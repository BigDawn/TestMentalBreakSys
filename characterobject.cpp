#include "characterobject.h"

CharacterObject::CharacterObject(int iniMentalStrength, std::string Name)
{
    this->mentalStrength = iniMentalStrength;
    this->characterName = Name;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getMentalLevel
/// \return mental level of specified character
/// \details returns the randomnly generated mental level of an NPC
int CharacterObject::getMentalLevel()
{
    return this->mentalStrength;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
std::string CharacterObject::christenedName()
{

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterObject::getName
/// \return name of the Character
/// \details returns the randomnly given character name of an NPC
std::string CharacterObject::getName()
{
    return this->characterName;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
void CharacterObject::populateNamesArray()
{
    std::ifstream nameStream;
    nameStream.open("npcNames.txt", std::ifstream::in);
    if( !nameStream.is_open() )
    {
        std::cout<< "File not opened!" <<std::endl;
        for( size_t i=0; i<possibleNames.max_size(); i++ )
        {
            possibleNames[i] = "Couldn't connect";
        }
        return;
    }
    else
    {
        std::cout<< "File opened!" <<std::endl;
    }

    //nameStream.
}
