// Externa filer
#include "NewGame.h"
#include "DrawMap.h"
#include "CaveGeneration.h"
#include "PlayerMovment.h"

#include <iostream>
using namespace std;

int DrawMap(int Room[50][100], int x, int y, int n, int playercordX, int playercordY)
{
  int counter = 0;

	// Skriv ut grottan

	for(int i = 0; i < n; i ++)
		{
			for(int j = 0; j < n; j ++)
			{
				if(counter == 100) // Om räknaren är 100
				{
					cout << endl;
					counter = 0;
				}

				if(Room[i][j] == 0) // Om rum värdet är 0
				{
					cout << " ";
				}
				else if(Room[i][j] == 1) // Om rum värdet är 1
				{
					cout << "#";
				}
				else if(Room[i][j] == 2) // Om rum värdet är 2
				{
					cout << "+";

				}
				else if(Room[i][j] == 3)
				{
					cout << "O";
				}
				
				counter ++;
				
			}
		
		}

	// Skriv ut spelaren
	return 0;

}