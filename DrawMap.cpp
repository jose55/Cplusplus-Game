// Externa filer
#include "headers.h"

#include <iostream>
using namespace std;

int DrawMap(int Room[50][50], int x, int y, int n, int playercordX, int playercordY)
{
  int counter = 0;

	// Skriv ut grottan
  system("cls");
	for(int i = 0; i < n; i ++)
		{
			for(int j = 0; j < n; j ++)
			{
				if(counter == 50) // Om räknaren är 100
				{
					cout << endl;
					counter = 0;
				}
				// Skriv ut tomrummet
				if(Room[i][j] == 0)
				{
					cout << " ";
				}
				// Skriv ut väggarna
				else if(Room[i][j] == 1)
				{
					cout << "#";
				}
				// Skriv ut health
				else if(Room[i][j] == 2)
				{
					cout << "+";

				}
				// Skriv ut spelaren
				else if(Room[i][j] == 3)
				{
					cout << "O";
				}
				
				counter ++;
				
			}
		
		}

	
	return 0;

}