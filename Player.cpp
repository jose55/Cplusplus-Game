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


	int playerdir = 0; // Vilket håll gubben ska gå åt
	
	// Medans spelaren lever
	while(playerhealth > 0 && playerlives > 0)
	{
		playerdir = _getch();
		Room[playerX][playerY] = 0;


		if(playerdir == 119 || playerdir == 87 && Room[playerX][playerY - 1] == 0)
		{
			playerY --;
			Room[playerX][playerY] = 3;
		}
		// Om användaren trycker på S eller s
		else if(playerdir == 115 || playerdir == 83 && Room[playerX][playerY + 1] == 0)
		{
			playerY ++;
			Room[playerX][playerY] = 3;
		}
		// Om användaren trycker på A eller a
		else if(playerdir == 97 || playerdir == 65  && Room[playerX - 1][playerY] == 0)
		{
			playerX --;
			Room[playerX][playerY] = 3;
		}
		// Om användaren trycker på D eller d
		else if(playerdir == 100 || playerdir == 68 && Room[playerX + 1][playerY] == 0)
		{
			playerX ++;
			Room[playerX][playerY] = 3;
		}
		cout << playerX << "	" << playerY;

		DrawMap(Room, x, y, n, playerX, playerY);



	}

	return 0;
}


