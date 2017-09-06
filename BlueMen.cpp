/*********************************************
** Filename: BlueMen.cpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: BlueMen implementation file
*********************************************/

#include "BlueMen.hpp"

/*********************************************
** Function: BlueMen constructor
** Description: Initializes strength to 12
** Parameters:  N/A
*********************************************/
BlueMen::BlueMen()
{
	strength = 12;
}

/*******************************************************************
** Function: attack
** Description: Generates random dice rolls to determine the 
** strength of attack, rolls 2d6. Assigns the roll to int totalRoll, 
** returns totalRoll
** Parameters: N/A
*******************************************************************/
int BlueMen::attack()
{
	int die1, die2, totalRoll;

	// Roll the ATTACK_DICE
	die1 = (rand() % ATTACK_DICE) + 1;
	die2 = (rand() % ATTACK_DICE) + 1;
	totalRoll = die1 + die2;
	std::cout << "The Attack is: " << totalRoll << std::endl;

	// Return the attack value
	return totalRoll;
}

/*********************************************************************
** Function: defense
** Description: Generates random dice rolls to determine the strength
** of the defense to counteract the attack. For BlueMen, if  
** strength > 8, rolls 3d6 for defense. If strength > && <= 8, BlueMen 
** lose a defense die, rolls 2d6. If strength <= 4, BlueMen lose one
** more defense die, rolls 1d6.
** Parameters: int attackIn - holds the value of the opponent's attack
*********************************************************************/
void BlueMen::defense(int attackIn)
{
	int die1, die2, die3, defenseRoll, newArmor, newStrength;
	if (getStrength() > 8)
	{
		die1 = (rand() % DEFENESE_DICE) + 1;
		die2 = (rand() % DEFENESE_DICE) + 1;
		die3 = (rand() % DEFENESE_DICE) + 1;
		defenseRoll = die1 + die2 + die3;
		std::cout << "The Defense is: " << defenseRoll << std::endl;
	}
	else if (getStrength() > 4 && getStrength() <= 8)
	{
		std::cout << "Only 2 defense dice remain." << std::endl;
		die1 = (rand() % DEFENESE_DICE) + 1;
		die2 = (rand() % DEFENESE_DICE) + 1;
		defenseRoll = die1 + die2;
		std::cout << "The Defense is: " << defenseRoll << std::endl;
	}
	else if (getStrength() <= 4)
	{
		std::cout << "Only 1 defense die remains." << std::endl;
		die1 = (rand() % DEFENESE_DICE) + 1;
		defenseRoll = die1;
		std::cout << "The Defense is: " << defenseRoll << std::endl;
	}

	// If DEFENSE_DICE rolls higher than ATTACK_DICE, attack is thwarted.
	if (defenseRoll >= attackIn)
		return;

	// If ATTACK_DICE rolls a higher number
	if (defenseRoll < attackIn)
	{
		attackIn -= defenseRoll;
		if (attackIn <= ARMOR)								// If Armor can absorb the whole attack
		{
			return;
		}
		else if (attackIn > ARMOR)							// If Armor is entirely depleted by attack
		{
			attackIn -= ARMOR;
			if (attackIn < getStrength())					// If Strength absorbs whole impact and strength remains
			{
				newStrength = getStrength() - attackIn;
				setStrength(newStrength);
				return;
			}
			else if (attackIn >= getStrength())				// If Attack is > Stength, Blue Men lose
			{
				setStrength(0);
				//std::cout << "Blue Man loses. ";			/* Uncomment to test if BlueMen die at appropriate time */
				return;
			}
		}
	}
}

int BlueMen::getArmor()
{
	return ARMOR;
}

int BlueMen::getStrength()
{
	return strength;
}

void BlueMen::setStrength(int strengthIn)
{
	strength = strengthIn;
}