#include "charactercreator.h"

CharacterCreator::CharacterCreator()
{
    unsigned seedTime = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed( seedTime );

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
    std::string nameOfNPC = chooseRandomName(false) + " " + chooseRandomName(true);
    CharacterObject newNpc(mentalStrengthGenerator(), nameOfNPC);
    return newNpc;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::mentalStrengthGenerator
/// \return new mental strength level
/// \details Returns a randomly generated mental strength level between 1 and 10
int CharacterCreator::mentalStrengthGenerator()
{
    distribution = std::uniform_int_distribution<int>(1,10);
    int mental = distribution(generator);
    return mental;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::populateNamesArray
/// \return if file opening was successful
/// \details Populates the list of available names, which is a private variable
bool CharacterCreator::populateNamesArray()
{
    //initialise and open first and second input streams
    std::ifstream firstNameStream;
    std::ifstream secondNameStream;
    firstNameStream.open("/home/dev/NetBeansProjects/TestMentalBreakSys/Names/firstNames.txt", std::ifstream::in);
    secondNameStream.open("/home/dev/NetBeansProjects/TestMentalBreakSys/Names/secondNames.txt", std::ifstream::in);

    //check if streams opened
    if( !firstNameStream.is_open() )
    {
        std::cout<< "First Names File not opened!" <<std::endl;
        possibleFirstNames.push_back("Couldn't connect");
        return false;
    }
    else
    {
        std::cout<< "First Names File opened!" <<std::endl;
    }

    if( !secondNameStream.is_open() )
    {
        std::cout<< "Second Names File not opened!" <<std::endl;
        possibleFirstNames.push_back("Couldn't connect");
        return false;
    }
    else
    {
        std::cout<< "Second Names File opened!" <<std::endl;
    }

    //populate vectors
    for( std::string line; std::getline(firstNameStream, line); )
    {
        possibleFirstNames.push_back(line);
    }
    for( std::string line; std::getline(secondNameStream,line); )
    {
        possibleSurnames.push_back(line);
    }

    return true;

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::chooseRandomFirstName
/// \return NPC first name
/// \details chooses a random name from the First name vector and returns it
std::string CharacterCreator::chooseRandomName(bool surname)
{
    std::vector<std::string> namesVector;

    if(surname)
    {
        namesVector = possibleSurnames;
    }
    else
    {
        namesVector = possibleFirstNames;
    }
    //set range using vector size
    distribution = std::uniform_int_distribution<int> (1,namesVector.size());

    //-1 for vector access
    int iname =  distribution(generator) - 1;

    //get name
    std::string chosenName = namesVector[iname];

    return chosenName;
}
