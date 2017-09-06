/*********************************************
** Filename: Medusa.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: Medusa header file
*********************************************/

#include "ReptilePeople.hpp"

#ifndef MEDUSA_HPP
#define MEDUSA_HPP

class Medusa : public Creature
{
private:
	const int ARMOR = 3;
	unsigned int strength;
public:
	Medusa();
	virtual int attack();
	virtual void defense(int);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int);
};
#endif