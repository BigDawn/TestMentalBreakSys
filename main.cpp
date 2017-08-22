#include <iostream>

#include "charactercreator.h"
#include "characterobject.h"
#include "mentalsystem.h"
#include "testsubjector.h"

///
/// \brief main
/// \return 0
/// \details This is a system I will use to design the Enemy Creation for my project.
/// It will also test systems used on them, hence the name Mental Break Sys.
int main()
{
    //initialise Mental System and Character Creator
    CharacterCreator creator;
    MentalSystem mentalSys;
    testSubjector evil;
    std::cout<< "\n" <<std::endl;

    //make three npc's
    CharacterObject Test1 = creator.createNPC();
    CharacterObject Test2 = creator.createNPC();
    CharacterObject Test3 = creator.createNPC();
    std::cout << "1:\nName: "<< Test1.getName() << "\nEnemy Type: " << Test1.getTypeOfEnemy() << "\nMental-Strength: " << Test1.getMentalLevel() << "\n" << std::endl;
    std::cout << "2:\nName: "<< Test2.getName() << "\nEnemy Type: " << Test2.getTypeOfEnemy() << "\nMental-Strength: " << Test2.getMentalLevel() << "\n" << std::endl;
    std::cout << "3:\nName: "<< Test3.getName() << "\nEnemy Type: " << Test3.getTypeOfEnemy() << "\nMental-Strength: " << Test3.getMentalLevel() << "\n" << std::endl;

    //subject them to stuff
    evil.bullet(&Test2);
    std::cout<< Test2.health <<std::endl;

    if(Test2.health<0)
    {
        std::cout<< Test2.getName() << " died!" <<std::endl;
        mentalSys.friendlyDied(Test2,Test1);
    }

//    int i = 0;
//    while( i<3 )
//    {
//        cout <<
//    }
    return 0; //a.exec();
}

