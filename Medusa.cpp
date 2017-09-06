/*********************************************
** Filename: Medusa.cpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: Medusa Implementation file
*********************************************/

#include "Medusa.hpp"

/*********************************************
** Function: Medusa constructor
** Description: Initializes strength to 8
** Parameters:  N/A
*********************************************/
Medusa::Medusa()
{
	strength = 8;
}

/*************************************************************
** Function: attack
** Description: Generates random dice rolls to determine the
** strength of attack, attacks with 2d6. If Medusa rolls a 12, 
** she instantly defeats her opponent. Assigns the roll to 
** int totalRoll, returns totalRoll
** Parameters: N/A
*************************************************************/
int Medusa::attack()
{
	int die1, die2, totalRoll;

	// Roll the ATTACK_DICE
	die1 = (rand() % ATTACK_DICE) + 1;
	die2 = (rand() % ATTACK_DICE) + 1;
	totalRoll = die1 + die2;
	// Hard code totalRoll = 12 to test glare.  Uncomment to test.
	// totalRoll = 12;
	if (totalRoll == 12)
	{
		std::cout << "Glare!!\nThe foolish opponent has into Medusa's eyes!\n";
		totalRoll = 100000000;
		return totalRoll;
	}
	else
	std::cout << "The Attack is: " << totalRoll << std::endl;

	// Return the attack value
	return totalRoll;
}

/*********************************************************************
** Function: defense
** Description: Generates random dice rolls to determine the strength
** of the defense to counteract the attack, rolls 1d6. 
** Parameters: int attackIn - holds the value of the opponent's attack
*********************************************************************/
void Medusa::defense(int attackIn)
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
			else if (attackIn >= getStrength())				// If Attack is > Stength, Medusa loses
			{
				setStrength(0);
				//std::cout << "Medusa Loses. ";			/* Uncomment to test if Medusa dies at appropriate time */
				return;
			}
		}
	}
}

int Medusa::getArmor()
{
	return ARMOR;
}

int Medusa::getStrength()
{
	return strength;
}

void Medusa::setStrength(int strengthIn)
{
	strength = strengthIn;
}
