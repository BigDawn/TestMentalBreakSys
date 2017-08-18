#include "charactercreator.h"

CharacterCreator::CharacterCreator()
{
    unsigned seedTime = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed(seedTime);
    distribution = std::uniform_int_distribution<int>(1,10);

    if( !populateNamesArray() )
    {
        std::cout<< "Creator failed to start correctly! Error creating namelist.\n\n";
        return;
    }
    std::cout<< "NPC Creator online!\n\n";
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::createNPC
/// \return a newly generated npc
/// \details Creates a new NPC, passing random values into the character
CharacterObject CharacterCreator::createNPC()
{
    CharacterObject newNpc(mentalStrengthGenerator(), "Test");
    return newNpc;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::mentalStrengthGenerator
/// \return new mental strength level
/// \details Returns a randomly generated mental strength level between 1 and 10
int CharacterCreator::mentalStrengthGenerator()
{
    int mental = distribution(generator);
    return mental;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::populateNamesArray
/// \details Populates the list of available names, which is a private variable
bool CharacterCreator::populateNamesArray()
{
    std::ifstream nameStream;
    nameStream.open("/home/dev/NetBeansProjects/TestMentalBreakSys/npcNames.txt", std::ifstream::in);
    //nameStream.open("npcNames.txt", std::ifstream::in);
    if( !nameStream.is_open() )
    {
        std::cout<< "File not opened!" <<std::endl;
        for( size_t i=0; i<possibleNames.size(); i++ )
        {
            possibleNames[i] = "Couldn't connect";
        }
        return false;
    }
    else
    {
        std::cout<< "File opened!" <<std::endl;
    }


    for(size_t i=0; i<possibleNames.size(); i++)
    {
        nameStream >> possibleNames[i];
        std::cout<< possibleNames[i] <<std::endl;
    }
    //possibleNames[2]=st;
    //std::cout<< possibleNames[2] <<std::endl;
    return true;
}
