#include <iostream>

#include "charactercreator.h"
#include "testsubjectorTemplate.h"

///
/// \brief main
/// \return 0
/// \details This is a system I will use to design the Enemy Creation for my project.
/// It will also test systems used on them, hence the name Mental Break Sys.
int main()
{
    //initialise Mental System and Character Creator
    CharacterCreator creator;
    testSubjector<CharacterEnemy> evil;
    std::cout<< "\n" <<std::endl;

    //make three npc's
    CharacterEnemy Test1 = creator.createEnemyNPC(Apologist);
    CharacterEnemy Test2 = creator.createEnemyNPC(SJW);
    CharacterEnemy Test3 = creator.createEnemyNPC(Radical);
    evil.vListNPCs.push_back(&Test1);
    evil.vListNPCs.push_back(&Test2);
    evil.vListNPCs.push_back(&Test3);
    std::cout << "1:\nName: "<< Test1.getName() << "\nEnemy Type: " << Test1.getTypeOfEnemy() << "\nMental-Strength: " << Test1.getMentalLevel() << "\n" << std::endl;
    std::cout << "2:\nName: "<< Test2.getName() << "\nEnemy Type: " << Test2.getTypeOfEnemy() << "\nMental-Strength: " << Test2.getMentalLevel() << "\n" << std::endl;
    std::cout << "3:\nName: "<< Test3.getName() << "\nEnemy Type: " << Test3.getTypeOfEnemy() << "\nMental-Strength: " << Test3.getMentalLevel() << "\n" << std::endl;

    //subject them to stuff
    evil.bullet(&Test3);

    return 0; //a.exec();
}

