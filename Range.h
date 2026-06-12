#pragma once
#include "Shooter.h"

class Range : virtual public Shooter
{
public:
    void shoot() override;
};