/**********************************************
** Filename: HarryPotter.cpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: HarryPotter implementation file
**********************************************/

#include "HarryPotter.hpp"

/***********************************************************
** Function: HarryPotter constructor
** Description: Initializes strength to 10, deathCount to 1.
** Parameters:  N/A
***********************************************************/
HarryPotter::HarryPotter()
{
	strength = 10;
	deathCount = 1;
}

/*************************************************************
** Function: attack
** Description: Generates random dice rolls to determine the
** strength of attack. Assigns the roll to int totalRoll,
** returns totalRoll
** Parameters: N/A
*************************************************************/
int HarryPotter::attack()
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
** of the defense to counteract the attack, rolls 2d6. Harry has no
** armor, but if his Strength Points reach zero, he respawns with full
** Strength of 10. This can only happen once, however.
** Parameters: int attackIn - holds the value of the opponent's attack
*********************************************************************/
void HarryPotter::defense(int attackIn)
{
	int die1, die2, defenseRoll, newArmor, newStrength;
	die1 = (rand() % DEFENESE_DICE) + 1;
	die2 = (rand() % DEFENESE_DICE) + 1;
	defenseRoll = die1 + die2;
	std::cout << "The Defense is: " << defenseRoll << std::endl;

	// If DEFENSE_DICE rolls higher than ATTACK_DICE, attack is thwarted.
	if (defenseRoll >= attackIn)
		return;

	// If ATTACK_DICE rolls a higher number
	if (defenseRoll < attackIn)
	{
		attackIn -= defenseRoll;
		if (attackIn <= ARMOR)											// If Armor can absorb the whole attack
		{
			//newArmor = getArmor() - attackIn;
			//setArmor(newArmor);
			return;
		}
		else if (attackIn > ARMOR)										// If Armor is entirely depleted by attack
		{
			attackIn -= ARMOR;
			if (attackIn < getStrength())								// If Strength absorbs whole impact and strength remains
			{
				newStrength = getStrength() - attackIn;
				setStrength(newStrength);
				return;
			}
			else if (attackIn >= getStrength())							// If Attack is > Stength, Harry loses
			{
				setStrength(0);
			}
			if (getStrength() == 0 && deathCount == 1)					// If Harry dies once, then Hogwarts! Respawn with 10 SP
			{
				setStrength(10);
				deathCount++;
				std::cout << "Hogwarts!\nHealth is reset to 10. " << std::endl;
			}
			else if (getStrength() == 0 && deathCount != 1)				// If Harry has respawned once already, he stays dead this time... :(
			{
				setStrength(0);
				//std::cout << "Harry Potter loses. " << std::endl;		/* Uncomment to test if Harry dies at appropriate time */
				return;
			}
		}
	}
}

int HarryPotter::getArmor()
{
	return ARMOR;
}

int HarryPotter::getStrength()
{
	return strength;
}

void HarryPotter::setStrength(int strengthIn)
{
	strength = strengthIn;
}
