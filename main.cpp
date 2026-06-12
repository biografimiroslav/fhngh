#include "Fortress.h"
#include <iostream>

int main()
{
    Fortress myFortress(4, 2, 10, 100);

    myFortress.printStatus();
    std::cout << std::endl;

    myFortress.Archer::shoot();
    myFortress.Archer::shoot();
    myFortress.Archer::shoot();

    myFortress.Range::shoot();
    myFortress.Range::shoot();

    myFortress.Catapult::shoot();
    myFortress.Catapult::shoot();
    myFortress.Catapult::shoot();

    return 0;
}