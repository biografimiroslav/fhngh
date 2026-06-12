#pragma once
#include "ArcherTower.h"
#include "Catapult.h"

class Fortress : public ArcherTower, public Catapult
{
private:
    int wallThickness;
    int gateStatusPercentage;

public:
    Fortress(int arrowsCount, int stonesCount, int thickness = 5, int gateStatus = 100);

    void printStatus() const;
};