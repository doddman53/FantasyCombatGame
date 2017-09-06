/************************************************
** Filename: ReptilePeople.hpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: ReptilePeople Implementation file
************************************************/

#include "ReptilePeople.hpp"

/*********************************************
** Function: ReptilePeople constructor
** Description: Initializes strength to 18
** Parameters:  N/A
*********************************************/
ReptilePeople::ReptilePeople()
{
	strength = 18;
}

/*************************************************************
** Function: attack
** Description: Generates random dice rolls to determine the
** strength of attack. Attacks with 3d6. Assigns the roll to 
** int totalRoll, returns totalRoll
** Parameters: N/A
*************************************************************/
int ReptilePeople::attack()
{
	int die1, die2, die3, totalRoll;
	
	// Roll the ATTACK_DICE
	die1 = (rand() % ATTACK_DICE) + 1;
	die2 = (rand() % ATTACK_DICE) + 1;
	die3 = (rand() % ATTACK_DICE) + 1;
	totalRoll = die1 + die2 + die3;
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
void ReptilePeople::defense(int attackIn)
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
			else if (attackIn >= getStrength())				// If Attack is > Stength, Reptile Person loses
			{
				setStrength(0);
				//std::cout << "Reptile Person Loses. ";	/* Uncomment to test if ReptilePeople die at appropriate time */
				return;
			}
		}
	}
}

int ReptilePeople::getArmor()
{
	return ARMOR;
}

int ReptilePeople::getStrength()
{
	return strength;
}

void ReptilePeople::setStrength(int strengthIn)
{
	strength = strengthIn;
}
