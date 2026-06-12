#pragma once
#include "Archer.h"
#include "Range.h"

class ArcherTower : public Archer, public Range
{
public:
    void setupTowerAmmo(const std::string& name, int count);
};