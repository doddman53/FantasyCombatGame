/*********************************************
** Filename: main.cpp
** Author: Patrick Dodd
** Date: 7.24.16
** Description: main method for testing
*********************************************/

#include "Gollum.hpp"
using std::cin;
using std::cout;
using std::endl;

int main()
{
	srand(time(NULL));

	int hits,
		choice,
		quit = 1,
		count = 1;		// Counts the round
	char next;			// Separates Battle of each round

	Creature *reptile = new ReptilePeople();
	Creature *reptile2 = new ReptilePeople();
	Creature *medusa = new Medusa();
	Creature *medusa2 = new Medusa();
	Creature *blue = new BlueMen();
	Creature *blue2 = new BlueMen();
	Creature *harry = new HarryPotter();
	Creature *harry2 = new HarryPotter();
	Creature *gollum = new Gollum();
	Creature *gollum2 = new Gollum();

	cout << "Welcome to the Fantasy Combat Simulation. Choose from battle matchups below. " << endl << endl;
	cout << "1. Reptile People vs. Medusa" << endl;
	cout << "2. Reptile People vs. Blue Men" << endl;
	cout << "3. Reptile People vs. Harry Potter" << endl;
	cout << "4. Reptile People vs. Gollum" << endl;
	cout << "5. Medusa vs. Blue Men" << endl;
	cout << "6. Medusa vs. Harry Potter" << endl;
	cout << "7. Medusa vs. Gollum" << endl;
	cout << "8. Blue Men vs. Harry Potter" << endl;
	cout << "9. Blue Men vs. Gollum" << endl;
	cout << "10. Harry Potter vs. Gollum" << endl;
	cout << "11. Reptile People vs. Rogue Reptile People" << endl;
	cout << "12. Medusa vs. Rogue Medusa" << endl;
	cout << "13. Blue Men vs. Rogue Blue Men" << endl;
	cout << "14. Harry Potter vs. Rogue Harry Potter" << endl;
	cout << "15. Gollum vs. Rogue Gollum" << endl << endl;
	
	cout << "Choice: ";
	cin >> choice;

	switch (choice)
	{
	case 1: /* Reptile People vs. Medusa */
		
		while (quit == 1)
		{
			system("CLS");
			cout << "Round " << count << "." << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Reptile Man attacks Medusa..." << endl << endl;

			hits = reptile->attack();
			medusa->defense(hits);
			if (medusa->getStrength() == 0)
			{
				cout << "Reptile Man has slain Medusa. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			system("pause");
			system("CLS");

			cout << "Medusa Attacks Reptile Man..." << endl << endl;

			hits = medusa->attack();
			reptile->defense(hits);
			if (reptile->getStrength() == 0)
			{
				cout << "Medusa has slain Reptile Man. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl << endl;

			count++;
			system("pause");
		}
		delete reptile;
		reptile = NULL;
		delete medusa;
		medusa = NULL;
		break;

	case 2: /* Reptile People vs. Blue Men*/
		
		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Reptile Man attacks Blue Men..." << endl << endl;

			hits = reptile->attack();
			blue->defense(hits);
			if (blue->getStrength() == 0)
			{
				cout << "Reptile Man has slain the Blue Men. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "The Blue Men Attack Reptile Man..." << endl << endl;

			hits = blue->attack();
			reptile->defense(hits);
			if (reptile->getStrength() == 0)
			{
				cout << "The Blue Men have slain Reptile Man. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete reptile;
		reptile = NULL;
		delete blue;
		blue = NULL;
		break;

	case 3: /* Reptile People vs. Harry Potter */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "Reptile Man attacks Harry Potter..." << endl << endl;

			hits = reptile->attack();
			harry->defense(hits);
			if (harry->getStrength() == 0)
			{
				cout << "Reptile Man has slain Harry Potter. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Harry Potter Attacks Reptile Man..." << endl << endl;

			hits = harry->attack();
			reptile->defense(hits);
			if (reptile->getStrength() == 0)
			{
				cout << "Harry Potter has slain Reptile Man. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete reptile;
		reptile = NULL;
		delete harry;
		harry = NULL;
		break;

	case 4: /* Reptile People vs. Gollum */
		
		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl;
			cout << "Reptile Man attacks Gollum..." << endl << endl;

			hits = reptile->attack();
			gollum->defense(hits);
			if (gollum->getStrength() == 0)
			{
				cout << "Reptile Man has slain Gollum. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Gollum Attacks Reptile Man..." << endl << endl;

			hits = gollum->attack();
			reptile->defense(hits);
			if (reptile->getStrength() == 0)
			{
				cout << "Gollum has slain Reptile Man. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete reptile;
		reptile = NULL;
		delete gollum;
		gollum = NULL;
		break;

	case 5: /* Medusa vs. Blue Men */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Medusa attacks the Blue Men..." << endl << endl;

			hits = medusa->attack();
			blue->defense(hits);
			if (blue->getStrength() == 0)
			{
				cout << "Medusa has slain the Blue Men. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Blue Men Attack Medusa..." << endl << endl;

			hits = blue->attack();
			medusa->defense(hits);
			if (medusa->getStrength() == 0)
			{
				cout << "The Blue Men have slain Medusa. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete medusa;
		medusa = NULL;
		delete blue;
		blue = NULL;
		break;

	case 6: /* Medusa vs. Harry */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "Medusa attacks Harry Potter..." << endl << endl;

			hits = medusa->attack();
			harry->defense(hits);
			if (harry->getStrength() == 0)
			{
				cout << "Medusa has slain Harry Potter. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Harry Potter Attacks Medusa..." << endl << endl;

			hits = harry->attack();
			medusa->defense(hits);
			if (medusa->getStrength() == 0)
			{
				cout << "Harry Potter has slain Medusa. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete medusa;
		medusa = NULL;
		delete harry;
		harry = NULL;
		break;

	case 7: /* Medusa vs. Gollum */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl;
			cout << "Medusa attacks Gollum..." << endl << endl;

			hits = medusa->attack();
			gollum->defense(hits);
			if (gollum->getStrength() == 0)
			{
				cout << "Medusa has slain Gollum. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Gollum Attacks Medusa..." << endl << endl;

			hits = gollum->attack();
			medusa->defense(hits);
			if (medusa->getStrength() == 0)
			{
				cout << "Gollum has slain Medusa. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete medusa;
		medusa = NULL;
		delete gollum;
		gollum = NULL;
		break;

	case 8: /* Blue Men vs. Harry */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "The Blue Men attack Harry Potter..." << endl << endl;

			hits = blue->attack();
			harry->defense(hits);
			if (harry->getStrength() == 0)
			{
				cout << "The Blue Men have slain Harry Potter. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Harry Potter Attacks the Blue Men..." << endl << endl;

			hits = harry->attack();
			blue->defense(hits);
			if (blue->getStrength() == 0)
			{
				cout << "Harry Potter has slain the Blue Men. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete blue;
		blue = NULL;
		delete harry;
		harry = NULL;
		break;

	case 9: /* Blue Men vs. Gollum */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl;
			cout << "The Blue Men attack Gollum..." << endl << endl;

			hits = blue->attack();
			gollum->defense(hits);
			if (gollum->getStrength() == 0)
			{
				cout << "The Blue Men have slain Gollum. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Gollum Attacks the Blue Men..." << endl << endl;

			hits = gollum->attack();
			blue->defense(hits);
			if (blue->getStrength() == 0)
			{
				cout << "Gollum has slain the Blue Men. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete blue;
		blue = NULL;
		delete gollum;
		gollum = NULL;
		break;

	case 10: /* Harry vs. Gollum */

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl;
			cout << "Harry Potter attacks Gollum..." << endl << endl;

			hits = harry->attack();
			gollum->defense(hits);
			if (gollum->getStrength() == 0)
			{
				cout << "Harry Potter has slain Gollum. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Gollum Attacks Harry Potter..." << endl << endl;

			hits = gollum->attack();
			harry->defense(hits);
			if (harry->getStrength() == 0)
			{
				cout << "Gollum has slain Harry Potter. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete harry;
		harry = NULL;
		delete gollum;
		gollum = NULL;
		break;

	case 11: /* Reptile Man vs. Rogue Reptile Man */

		cout << "Civil War!!" << endl << endl;

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Rogue Reptile Man\nArmor: " << reptile2->getArmor() << "\tStrength Points: " << reptile2->getStrength() << endl << endl;
			cout << "Reptile Man attacks Rogue Reptile Man..." << endl << endl;

			hits = reptile->attack();
			reptile2->defense(hits);
			if (reptile2->getStrength() == 0)
			{
				cout << "Reptile Man has slain Rogue Reptile Man. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Rogue Reptile Man\nArmor: " << reptile2->getArmor() << "\tStrength Points: " << reptile2->getStrength() << endl;
			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Rogue Reptile Man Attacks Reptile Man..." << endl << endl;

			hits = reptile2->attack();
			reptile->defense(hits);
			if (reptile->getStrength() == 0)
			{
				cout << "Rogue Reptile Man has slain Reptile Man. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Reptile Man\nArmor: " << reptile->getArmor() << "\tStrength Points: " << reptile->getStrength() << endl;
			cout << "Rogue Reptile Man\nArmor: " << reptile2->getArmor() << "\tStrength Points: " << reptile2->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete reptile;
		reptile = NULL;
		delete reptile2;
		reptile2 = NULL;
		break;

	case 12: /* Medusa vs. Rogue Medusa */

		cout << "Civil War!!" << endl << endl;
		
		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Rogue Medusa\nArmor: " << medusa2->getArmor() << "\tStrength Points: " << medusa2->getStrength() << endl << endl;
			cout << "Medusa attacks Rogue Medusa..." << endl << endl;

			hits = medusa->attack();
			medusa2->defense(hits);
			if (medusa2->getStrength() == 0)
			{
				cout << "Medusa has slain Rogue Medusa. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Rogue Medusa\nArmor: " << medusa2->getArmor() << "\tStrength Points: " << medusa2->getStrength() << endl;
			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Rogue Medusa Attacks Medusa..." << endl << endl;

			hits = medusa2->attack();
			medusa->defense(hits);
			if (medusa->getStrength() == 0)
			{
				cout << "Rogue Medusa has slain Medusa. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Medusa\nArmor: " << medusa->getArmor() << "\tStrength Points: " << medusa->getStrength() << endl;
			cout << "Rogue Medusa\nArmor: " << medusa2->getArmor() << "\tStrength Points: " << medusa2->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete medusa;
		medusa = NULL;
		delete medusa2;
		medusa2 = NULL;
		break;

	case 13: /* Blue Men vs. Rogue Blue Men */

		cout << "Civil War!!" << endl << endl;
		
		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Rogue Blue Men\nArmor: " << blue2->getArmor() << "\tStrength Points: " << blue2->getStrength() << endl << endl;
			cout << "The Blue Men attack the Rogue Blue Men..." << endl << endl;

			hits = blue->attack();
			blue2->defense(hits);
			if (blue2->getStrength() == 0)
			{
				cout << "The Blue Men have slain the Rogue Blue Men. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Rogue Blue Men\nArmor: " << blue2->getArmor() << "\tStrength Points: " << blue2->getStrength() << endl;
			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "The Rogue Blue Men Attack the Blue Men..." << endl << endl;

			hits = blue2->attack();
			blue->defense(hits);
			if (blue->getStrength() == 0)
			{
				cout << "The Rogue Blue Men have slain the Blue Men. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Blue Men\nArmor: " << blue->getArmor() << "\tStrength Points: " << blue->getStrength() << endl;
			cout << "Rogue Blue Men\nArmor: " << blue2->getArmor() << "\tStrength Points: " << blue2->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete blue;
		blue = NULL;
		delete blue2;
		blue2 = NULL;
		break;

	case 14: /* Harry Potter  vs. Rogue Harry Potter */

		cout << "Civil War!!" << endl << endl;
		
		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "Rogue Harry Potter\nArmor: " << harry2->getArmor() << "\tStrength Points: " << harry2->getStrength() << endl << endl;
			cout << "Harry Potter attacks Rogue Harry Potter..." << endl << endl;

			hits = harry->attack();
			harry2->defense(hits);
			if (harry2->getStrength() == 0)
			{
				cout << "Harry Potter has slain Rogue Harry Potter. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Rogue Harry Potter\nArmor: " << harry2->getArmor() << "\tStrength Points: " << harry2->getStrength() << endl;
			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Rogue Harry Potter Attacks Harry Potter..." << endl << endl;

			hits = harry2->attack();
			harry->defense(hits);
			if (harry->getStrength() == 0)
			{
				cout << "Rogue Harry Potter has slain Harry Potter. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Harry Potter\nArmor: " << harry->getArmor() << "\tStrength Points: " << harry->getStrength() << endl;
			cout << "Rogue Harry Potter\nArmor: " << harry2->getArmor() << "\tStrength Points: " << harry2->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete harry;
		harry = NULL;
		delete harry2;
		harry2 = NULL;
		break;

	case 15: /* Gollum vs. Rogue Gollum */

		cout << "Civil War!!" << endl << endl;

		while (quit == 1)
		{
			cout << "Round " << count << "." << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl;
			cout << "Rogue Gollum\nArmor: " << gollum2->getArmor() << "\tStrength Points: " << gollum2->getStrength() << endl << endl;
			cout << "Gollum attacks Rogue Gollum..." << endl << endl;

			hits = gollum->attack();
			gollum2->defense(hits);
			if (gollum2->getStrength() == 0)
			{
				cout << "Gollum has slain Rogue Gollum. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Rogue Gollum\nArmor: " << gollum2->getArmor() << "\tStrength Points: " << gollum2->getStrength() << endl;
			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl << endl;
			cout << "Press any key then ENTER.";
			cin >> next;

			cout << "Rogue Gollum Attacks Gollum..." << endl << endl;

			hits = gollum2->attack();
			gollum->defense(hits);
			if (gollum->getStrength() == 0)
			{
				cout << "Rogue Gollum has slain Gollum. GAME OVER.";
				quit = 2;
				break;
			}
			else
				quit = 1;

			cout << "Gollum\nArmor: " << gollum->getArmor() << "\tStrength Points: " << gollum->getStrength() << endl;
			cout << "Rogue Gollum\nArmor: " << gollum2->getArmor() << "\tStrength Points: " << gollum2->getStrength() << endl << endl << endl;

			count++;
			cout << "Press any key then ENTER for the next round. ";
			cin >> next;
			cout << endl;
		}
		delete gollum;
		gollum = NULL;
		delete gollum2;
		gollum2 = NULL;
		break;



	default: cout << "Please make a choice between 1 and 10. ";
	}

	// Exit the game
	cout << endl << endl;
	system("pause");

	delete reptile;
	reptile = NULL;
	delete reptile2;
	reptile2 = NULL;
	delete medusa;
	medusa = NULL;
	delete medusa2;
	medusa2 = NULL;
	delete blue;
	blue = NULL;
	delete blue2;
	blue2 = NULL;
	delete harry;
	harry = NULL;
	delete harry2;
	harry2 = NULL;
	delete gollum;
	gollum = NULL;
	delete gollum2;
	gollum2 = NULL;
	
	return 0;
}