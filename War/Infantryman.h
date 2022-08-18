#pragma once

#include"Warrior.h"

class Infantryman : public Warrior
{
public:
	virtual void info() = 0;
	virtual ~Infantryman() {};
};