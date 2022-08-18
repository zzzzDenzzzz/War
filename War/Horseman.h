#pragma once

#include"Warrior.h"

class Horseman : public Warrior
{
public:
	virtual void info() = 0;
	virtual ~Horseman() {};
};