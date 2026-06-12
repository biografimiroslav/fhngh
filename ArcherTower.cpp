#include "ArcherTower.h"

void ArcherTower::setupTowerAmmo(const std::string& name, int count)
{
    this->giveAmmo(name, count);
}