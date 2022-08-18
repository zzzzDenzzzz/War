#pragma once

#include"Warrior.h"

class Archer : public Warrior
{
public:
	virtual void info() = 0;
	virtual ~Archer() {};
};