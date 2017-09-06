/*********************************************
** Filename: BlueMen.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: BlueMen header file
*********************************************/

#include "Medusa.hpp"

#ifndef BLUEMEN_HPP
#define BLUEMEN_HPP

class BlueMen : public Creature
{
private:
	const int ARMOR = 3,
			  ATTACK_DICE = 10;
	unsigned int strength;
public:
	BlueMen();
	virtual int attack();
	virtual void defense(int);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int);
};
#endif