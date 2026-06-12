#include "Fortress.h"

Fortress::Fortress(int arrowsCount, int stonesCount, int thickness, int gateStatus)
    : wallThickness(thickness), gateStatusPercentage(gateStatus)
{
    ArcherTower::setupTowerAmmo("Steel Arrow", arrowsCount);
    Catapult::giveAmmo("Boulder", stonesCount);
}

void Fortress::printStatus() const
{
    std::cout << "Fortress Status -> Wall Thickness: " << wallThickness
        << "m | Gate Integrity: " << gateStatusPercentage << "%" << std::endl;
}