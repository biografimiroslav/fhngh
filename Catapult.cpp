#include "Catapult.h"

void Catapult::shoot()
{
    if (ammoCount > 0)
    {
        --ammoCount;
        std::cout << "Catapult launched a stone: " << ammoName << std::endl;
    }
    else
    {
        std::cout << "Catapult out of stones!" << std::endl;
    }
}