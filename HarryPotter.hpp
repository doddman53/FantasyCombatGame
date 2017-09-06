/*********************************************
** Filename: HarryPotter.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: HarryPotter header file
*********************************************/

#include "BlueMen.hpp"

#ifndef HARRYPOTTER_HPP
#define HARRYPOTTER_HPP

class HarryPotter : public Creature
{
private:
	const int ARMOR = 0;
	unsigned int strength, deathCount;
public:
	HarryPotter();
	virtual int attack();
	virtual void defense(int);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int);
};
#endif