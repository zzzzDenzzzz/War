#pragma once

class Warrior
{
	int health;
	int armory;
	int power;
public:
	virtual ~Warrior() {};
	void setHealth(int health);
	void setArmory(int armory);
	void setPower(int power);
};