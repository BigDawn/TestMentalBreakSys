#include "charactercreator.h"

CharacterCreator::CharacterCreator()
{
    unsigned seedTime = std::chrono::system_clock::now().time_since_epoch().count();
    generator.seed(seedTime);
    distribution = std::uniform_int_distribution<int>(1,10);
    std::cout<< "NPC Creator online!\n\n";
}

CharacterObject CharacterCreator::createNPC()
{
    CharacterObject newNpc(mentalStrengthGenerator(), "Test");
    return newNpc;
}

int CharacterCreator::mentalStrengthGenerator()
{
    int mental = distribution(generator);
    return mental;
}
