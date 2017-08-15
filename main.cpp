#include <QCoreApplication>
#include <iostream>

#include "characterobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    CharacterObject Test(5,"Test");
    std::string nom = Test.getName();
    std::cout << "Here:  " << nom << std::endl;

    return a.exec();
}
