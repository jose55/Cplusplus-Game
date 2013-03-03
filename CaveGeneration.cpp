// Externa filer
#include "CaveGeneration.h"
#include "NewGame.h"
#include "DrawMap.h"
#include "CaveGeneration.h"
#include "PlayerMovment.h"

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int CaveGeneration (int Room[50][50], int x, int y, int n, int playercordX, int playercordY)
{
	srand(time(NULL)); // Sätter seedet för kartan // srand(siffra) för en definerad karta // srand(time(NULL)) för en random
	
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

	// Generera gångarna i grottan
	while( road <= 200 && x < 45 && y < 95 && x > 1 && y > 1)
	{
		direction = rand() % 3;

			switch(direction)
			{
			case 0: // Nord
			
			Room[x][y - 1] = 0;
			road ++;
			y --;

			break;

			case 1: // Öst
			
			Room[x - 1][y] = 0;
			road ++;
			x ++;

			break;

			case 2: // Syd
			
			Room[x][y + 1] = 0;
			road ++;
			y ++;

			break;

			case 3: // Väst
			
			Room[x + 1][y] = 0;
			road ++;
			x ++;
		
			break;
			}
		
	}
	
	playercordX = x;
	playercordY = y;


	return 0;
}