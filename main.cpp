#include <QCoreApplication>
#include <iostream>
#include <random>

#include "characterobject.h"
#include "mentalsystem.h"

CharacterObject npcCreator(int MentalLevel)
{
    CharacterObject newNpc(MentalLevel, "Test");
    return newNpc;
}

int main(int argc, char *argv[])
{
    //initialise Mental System
    MentalSystem phukDerShizUp;
    //set up mental generator
    QCoreApplication a(argc, argv);
    std::default_random_engine generator;
    generator.seed(time(0));
    std::uniform_int_distribution<int> distribution(1,10);
    auto mental = std::bind(distribution, generator);

    //make three npc's
    CharacterObject Test1 = npcCreator( mental() );
    CharacterObject Test2 = npcCreator( mental() );
    CharacterObject Test3 = npcCreator( mental() );
    std::cout << "1:\nName: "<< Test1.getName() << "\nMental-Strength: " << Test1.getMentalLevel() << "\n" << std::endl;
    std::cout << "2:\nName: "<< Test2.getName() << "\nMental-Strength: " << Test2.getMentalLevel() << "\n" << std::endl;
    std::cout << "3:\nName: "<< Test3.getName() << "\nMental-Strength: " << Test3.getMentalLevel() << "\n" << std::endl;

    return 0; //a.exec();
}

