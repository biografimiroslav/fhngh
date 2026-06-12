#include "Archer.h"

void Archer::shoot()
{
    if (ammoCount > 0)
    {
        --ammoCount;
        std::cout << "Archer fired an arrow: " << ammoName << std::endl;
    }
    else
    {
        std::cout << "Archer out of arrows!" << std::endl;
    }
}