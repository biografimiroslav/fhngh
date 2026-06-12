#include "Range.h"

void Range::shoot()
{
    if (ammoCount > 0)
    {
        --ammoCount;
        std::cout << "Ranger fired an arrow: " << ammoName << std::endl;
    }
    else
    {
        std::cout << "Ranger out of arrows!" << std::endl;
    }
}