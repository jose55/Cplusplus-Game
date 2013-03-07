#include "headers.h"
#include <iostream>
#include <conio.h>
using namespace std;

int Player(int x, int y, int Room[50][50], int n)
{
	// Variabler
	int player = 1;
	// Mur mycket health spelaren har
	int playerhealth = 100;
	// Antalet liv spelaren har
	int playerlives = 3;
	// Spelarens kordinater
	int playerX = x, playerY = y;
	// Spelarens gammla kordinater
	int oldX, oldY;
	// Vilket h�ll gubben ska g� �t
	int playerdir = 0; 
	// Medans spelaren lever

	while(playerhealth > 0 && playerlives > 0 ) // Medans spelaren �r vid liv och har minst 1 liv kvar
	{
		DrawMap(Room, x, y, n, playerX, playerY);
		playerdir = _getch();
		// S�tter oldX och oldY till anv�ndarens nuvarande kordinater
		oldX = playerX;
		oldY = playerY;

		// Om anv�ndaren trycker p� W eller w 
		if((playerdir == 119 || playerdir == 87) && Room[playerX - 1][playerY] == 0)
		{	
			playerX --;
			Room[playerX][playerY] = 3;
		}

		// Om anv�ndaren trycker p� S eller s
		else if((playerdir == 115 || playerdir == 83) && Room[playerX + 1][playerY] == 0)
		{	
			playerX ++;
			Room[playerX][playerY] = 3;
		}
		// Om anv�ndaren trycker p� A eller a
		else if((playerdir == 97 || playerdir == 65) && Room[playerX][playerY - 1] == 0)
		{	
			playerY --;
			Room[playerX][playerY] = 3;
		}
		// Om anv�ndaren trycker p� D eller d
		else if((playerdir == 100 || playerdir == 68) && Room[playerX][playerY + 1] == 0)
		{	
			playerY ++;
			Room[playerX][playerY] = 3;
		}
		else{}

		// Om anv�ndaren inte st�r kvar p� samma st�lle
		if(oldX != playerX || oldY != playerY)
		{
			Room[oldX][oldY] = 0;
		}


		

		// Anropar funktionen f�r att skriva ut kartan
		
		cout << "Health : " << playerhealth << endl;

	}

	return 0;
}


