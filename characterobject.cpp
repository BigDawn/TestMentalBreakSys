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
    std::ifstream nameStream;
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
        cout << "File not opened!" <<endl;
        for( int i=0; i<possibleNames.size(); i++ )
        {
            possibleNames[i] = "Couldn't connect";
        }
        return;
    }
    else
    {
        cout << "File opened!" < <endl;
    }
}
