#pragma once
#include "Shooter.h"

class Catapult : virtual public Shooter
{
public:
    void shoot() override;
};