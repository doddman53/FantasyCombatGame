/*********************************************
** Filename: ReptilePeople.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: ReptilePeople header file
*********************************************/

#include "Creature.hpp"

#ifndef REPTILEPEOPLE_HPP
#define REPTILEPEOPLE_HPP

class ReptilePeople : public Creature
{
private:
	const int ARMOR = 7;
	unsigned int strength;	
public:
	ReptilePeople();
	virtual int attack();
	virtual void defense(int);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int);
};
#endif