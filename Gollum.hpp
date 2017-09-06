/*********************************************
** Filename: Gollum.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: Gollum header file
*********************************************/

#include "HarryPotter.hpp"

#ifndef GOLLUM_HPP
#define GOLLUM_HPP

class Gollum : public Creature
{
private:
	const int ARMOR = 3;
	unsigned int strength;
public:
	Gollum();
	virtual int attack();
	virtual void defense(int);
	virtual int getArmor();
	virtual int getStrength();
	virtual void setStrength(int);
};
#endif