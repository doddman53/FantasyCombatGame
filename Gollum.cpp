/*********************************************
** Filename: Gollum.cpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: Gollum implementation file
*********************************************/

#include "Gollum.hpp"

/*********************************************
** Function: Gollum constructor
** Description: Initializes strength to 8
** Parameters:  N/A
*********************************************/
Gollum::Gollum()
{
	strength = 8;
}

/*************************************************************
** Function: attack
** Description: Generates random dice rolls to determine the
** strength of attack, rolls 1d6. 5% of the time Gollum rolls
** 3d6. Assigns the roll to int totalRoll,
** returns totalRoll
** Parameters: N/A
*************************************************************/
int Gollum::attack()
{
	int die1, die2, die3, random, totalRoll;
	random = (rand() % 20) + 1;

	// Roll the ATTACK_DICE
	if (random == 5)				// 5% chance Gollum rolls 3d6 for attack
	{
		std::cout << "One Ring to Rule Them All...\nAttacks with 3d6.\n" << std::endl;
		die1 = (rand() % ATTACK_DICE) + 1;
		die2 = (rand() % ATTACK_DICE) + 1;
		die3 = (rand() % ATTACK_DICE) + 1;
		totalRoll = die1 + die2 + die3;
		std::cout << "The Attack is: " << totalRoll << std::endl;
		return totalRoll;
	}
	else if (random != 5)
	{
		die1 = (rand() % ATTACK_DICE) + 1;	// 95% of the time, he rolls 1d6 for attack
		totalRoll = die1;
		std::cout << "The Attack is: " << totalRoll << std::endl;

		// Return the attack value
		return totalRoll;
	}
}

/*********************************************************************
** Function: defense
** Description: Generates random dice rolls to determine the strength
** of the defense to counteract the attack, rolls 1d6.
** Parameters: int attackIn - holds the value of the opponent's attack
*********************************************************************/
void Gollum::defense(int attackIn)
{
	int die1, defenseRoll, newArmor, newStrength;
	die1 = (rand() % DEFENESE_DICE) + 1;
	defenseRoll = die1;
	std::cout << "The Defense is: " << defenseRoll << std::endl;

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
			else if (attackIn >= getStrength())				// If Attack is > Stength, Gollum loses
			{
				setStrength(0);
				//std::cout << "Gollum Loses. ";			/* Uncomment to test if Gollum dies at appropriate time */
				return;
			}
		}
	}
}

int Gollum::getArmor()
{
	return ARMOR;
}

int Gollum::getStrength()
{
	return strength;
}

void Gollum::setStrength(int strengthIn)
{
	strength = strengthIn;
}
