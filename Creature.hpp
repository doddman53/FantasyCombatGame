/*********************************************
** Filename: Creature.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: Abstract Class header file
*********************************************/

#include <iostream>
#include <ctime>

#ifndef CREATURE_HPP
#define CREATURE_HPP

const int ATTACK_DICE = 6,
		  DEFENESE_DICE = 6;

class Creature
{
protected:
	static unsigned int armor, strength;
public:
	Creature();
	virtual int attack() = 0;
	virtual void defense(int);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int);
};
#endif