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

    std::cout<< "NPC Creator online!" <<std::endl;
}

CharacterCreator::~CharacterCreator()
{
    std::cout<< "NPC Creator offline!" <<std::endl;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief CharacterCreator::createNPC
/// \return a newly generated npc
/// \details Creates a new NPC, passing random values into the character
CharacterEnemy CharacterCreator::createEnemyNPC(EnemyType type)
{
    std::string nameOfNPC = chooseRandomName(&possibleFirstNames) + " " + chooseRandomName(&possibleSurnames);
    CharacterEnemy newNpc(mentalStrengthGenerator(), nameOfNPC, type);

    //Gender
    switch (newNpc.getTypeOfEnemy())
    {
    case Apologist:
        newNpc.assignGender(Female);
        break;

    case Radical:
        newNpc.assignGender(Female);
        break;

    case SJW:
        newNpc.assignGender(Male);
        break;

    default:
        newNpc.assignGender(IsASocialConstruct);
        break;
    }

    //Breast Size
    switch(newNpc.getGender())
    {
    case Male:
        newNpc.setBreastSize( man );
        break;

    case Female:
        newNpc.setBreastSize( DD );
        break;

    case IsASocialConstruct:
        newNpc.setBreastSize(AA);
        break;

    default:
        newNpc.setBreastSize(C);
        break;
    }

    initialEquipment(&newNpc);
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
    bool isfirstStreamOK = false;
    bool isSecondStreamOK = false;
    //initialise and open first and second input streams
    std::ifstream firstNameStream;
    std::ifstream secondNameStream;
    //SUSE
    // firstNameStream.open("/home/dev/NetBeansProjects/TestMentalBreakSys/Names/firstNames.txt", std::ifstream::in);
    // secondNameStream.open("/home/dev/NetBeansProjects/TestMentalBreakSys/Names/secondNames.txt", std::ifstream::in);
    //ARCH
   firstNameStream.open("/home/sexybeast/MySoftware/TestMentalBreakSys/Names/firstNames.txt", std::ifstream::in);
   secondNameStream.open("/home/sexybeast/MySoftware/TestMentalBreakSys/Names/secondNames.txt", std::ifstream::in);

    //check if streams opened
    if( !firstNameStream.is_open() )    //check for forename filestream
    {
        isfirstStreamOK = false;
        std::cout<< "Character Creator: First Names File not opened!" <<std::endl;
        possibleFirstNames.push_back("Couldn't connect");
    }
    else
    {
        isfirstStreamOK = true;
        std::cout<< "Character Creator: First Names File opened!" <<std::endl;
    }

    if( !secondNameStream.is_open() )   //check for surname filestream
    {
        isSecondStreamOK = false;
        std::cout<< "Character Creator: Second Names File not opened!" <<std::endl;
        possibleSurnames.push_back("Couldn't connect");
    }
    else
    {
        isSecondStreamOK = true;
        std::cout<< "Character Creator: Second Names File opened!" <<std::endl;
    }
    if( !isfirstStreamOK || !isSecondStreamOK ) //check if program can continue
    {
        return false;
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
std::string CharacterCreator::chooseRandomName(std::vector<std::string> *nameVectorNeeded)
{
    std::vector<std::string> namesVector = *nameVectorNeeded;

    //set range using vector size
    distribution = std::uniform_int_distribution<int> (1,namesVector.size());

    //-1 for vector access
    int iname =  distribution(generator) - 1;

    //get name
    std::string chosenName = namesVector[iname];

    return chosenName;
}
