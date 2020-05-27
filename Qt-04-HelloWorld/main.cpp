#include <QCoreApplication>
#include <iostream>

#include "welcomeclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Hello World" <<std::endl;

    WelcomeClass objWel;

    return a.exec();
}
