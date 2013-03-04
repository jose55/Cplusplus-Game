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
	// Vilket håll gubben ska gå åt
	int playerdir = 0; 
	// Medans spelaren lever

	while(playerhealth > 0 && playerlives > 0 ) // Medans spelaren är vid liv och har minst 1 liv kvar
	{
		Room[playerX][playerY] = 0;
		playerdir = _getch();

		// Om användaren trycker på W eller w 
		if((playerdir == 119 || playerdir == 87) && Room[playerX - 1][playerY] == 0)
		{
			playerX --;
			Room[playerX][playerY] = 3;
		}

		// Om användaren trycker på S eller s
		else if((playerdir == 115 || playerdir == 83) && Room[playerX + 1][playerY] == 0)
		{
			playerX ++;
			Room[playerX][playerY] = 3;
		}
		// Om användaren trycker på A eller a
		else if((playerdir == 97 || playerdir == 65) && Room[playerX][playerY - 1] == 0)
		{
			playerY --;
			Room[playerX][playerY] = 3;
		}
		// Om användaren trycker på D eller d
		else if((playerdir == 100 || playerdir == 68) && Room[playerX][playerY + 1] == 0)
		{
			playerY ++;
			Room[playerX][playerY + 1] = 3;
		}
		else{}
		cout << playerX << "	" << playerY;

		DrawMap(Room, x, y, n, playerX, playerY);

	}

	return 0;
}


