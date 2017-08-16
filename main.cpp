#include <iostream>
#include <charactercreator.h>

#include "characterobject.h"
#include "mentalsystem.h"

int main()
{
    //initialise Mental System and Character Creator
    MentalSystem phukDerShizUp;
    CharacterCreator creator;

    //make three npc's
    CharacterObject Test1 = creator.createNPC();
    CharacterObject Test2 = creator.createNPC();
    CharacterObject Test3 = creator.createNPC();
    std::cout << "1:\nName: "<< Test1.getName() << "\nMental-Strength: " << Test1.getMentalLevel() << "\n" << std::endl;
    std::cout << "2:\nName: "<< Test2.getName() << "\nMental-Strength: " << Test2.getMentalLevel() << "\n" << std::endl;
    std::cout << "3:\nName: "<< Test3.getName() << "\nMental-Strength: " << Test3.getMentalLevel() << "\n" << std::endl;

    //subject them to stuff

    return 0; //a.exec();
}

