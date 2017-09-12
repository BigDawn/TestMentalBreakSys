#include <iostream>

#include "charactercreator.h"
#include "testsubjectorTemplate.h"
#include "mentalsystem.h"

std::vector<CharacterEnemy*> vEnemyList;
//std::vector<CharacterFriendly*> vFriendlyList;

CharacterEnemy enemyMake(EnemyType type, CharacterCreator *creator)
{
    CharacterEnemy Test = creator->createEnemyNPC(type);
    vEnemyList.push_back(&Test);
    return Test;
}

std::string translateGender( Gender g )
{
    std::string s;
    switch(g)
    {
    case Male:
        s = "Male";
        break;
    case Female:
        s = "Female";
        break;
    case IsASocialConstruct:
        s = "Fluid";
        break;
    default:
        s = "Error";
        break;
    }

    return s;
}

std::string translateBreastSize( BreastSize b )
{
    std::string s;

    switch(b)
    {
    case man:
        s = "man";
        break;

    case AA:
        s = "AA";

        break;

    case A:
        s = "A";
        break;

    case B:
        s = "B";
        break;

    case C:
        s = "C";
        break;

    case D:
        s = "D";
        break;

    case DD:
        s = "DD";
        break;

    case E:
        s = "E";
        break;

    case EE:
        s = "EE";
        break;

    }
    return s;
}

std::string translateEnemy( EnemyType e )
{
    std::string s;

    switch(e)
    {
    case Apologist:
        s = "Apologist";
        break;

    case Radical:
        s = "Radical";
        break;

    case SJW:
        s = "SJW";
        break;
    }

    return s;
}

void displayEnemy(CharacterEnemy *chara)
{
    std::cout << "\nName: "<< chara->getName()
              << "\nGender: " << translateGender(chara->getGender())
              << "\nEnemy Type: " << translateEnemy( chara->getTypeOfEnemy() )
              << "\nMental-Strength: " << chara->getMentalLevel()
              << "\nBreast Size: " << translateBreastSize( chara->getBreastSize() )
              << "\n" <<std::endl;
}

void bulletHitEnemy(CharacterEnemy *c, testSubjector<CharacterEnemy> *ts, MentalSystem *m)
{
  std::cout << "bullet hits enemy" << '\n';
  TypeOfAction tempAct;
  std::vector<CharacterEnemy> vEnemyList;
  ts.bullet(&c, &tempAct, *vEnemyList);
  m.controllerMental(c, tempAct, vEnemyList);
}


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
    MentalSystem mentalSys;
    std::cout<< "\n" <<std::endl;

    //make three npc's
    CharacterEnemy Test1 = enemyMake(Apologist, &creator);
    CharacterEnemy Test2 = enemyMake(SJW, &creator);
    CharacterEnemy Test3 = enemyMake(Radical, &creator);

    for(int i=0; i<3; i++)
    {
        std::cout<< vEnemyList[i]->getName() << std::endl;
    }
    std::cout << "\n";
    evil.vListNPCs = vEnemyList;    //sync enemy list

    //subject them to stuff
    bulletHitEnemy(&Test1, &evil, &m);

//    std::cout << "1:";
//    displayEnemy(&Test1);
//    std::cout << "2:";
//    displayEnemy(&Test2);
//    std::cout << "3:";
//    displayEnemy(&Test3);

    return 0; //a.exec();
}
