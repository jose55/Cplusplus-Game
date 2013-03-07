// Externa filer
#include "headers.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int CaveGeneration (int Room[50][50], int x, int y, int n, int playercordX, int playercordY)
{
	srand(time(NULL)); // S�tter seedet f�r kartan // srand(siffra) f�r en definerad karta // srand(time(NULL)) f�r en random
	
	int direction = 0;
	int recentdirection = 0;
	int road = 0;

		// Fyll Grottan
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			Room[j][i] = 1;
		}

	}

	// Generera g�ngarna i grottan
	while(road < 200 && x < 49 && y < 45)
	{

		direction = rand() % 3; // Generera vilket h�ll v�gen ska g� �t

		switch(direction)
		{
		case 0: // Nord
		Room[x][y + 1] = 0;
		Room[x][y - 1] = 0;
		road ++;
		y --;

		break;

		case 1: // �st
		Room[x + 1][y] = 0;
		Room[x - 1][y] = 0;
		road ++;
		x ++;

		break;

		case 2: // Syd
		Room[x][y - 1] = 0;
		Room[x][y + 1] = 0;
		road ++;
		y ++;

		break;

		case 3: // V�st
		Room[x - 1][y] = 0;
		Room[x + 1][y] = 0;
		road ++;
		x ++;
		
		break;
		}

		
	}


	return 0;
}