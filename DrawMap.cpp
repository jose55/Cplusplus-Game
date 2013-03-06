// Externa filer
#include "headers.h"

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int DrawMap(int Room[50][50], int x, int y, int n, int playercordX, int playercordY)
{
  int counter = 0;
  srand(time(NULL));
  int colour = 12;


	// Skriv ut grottan
  system("cls");
	for(int i = 0; i < n; i ++)
		{
			for(int j = 0; j < n; j ++)
			{

				colour = rand() % 10 + 1;

				if(counter == 50) // Om räknaren är 100
				{
					cout << endl;
					counter = 0;
				}
				// Skriv ut tomrummet
				if(Room[i][j] == 0)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_GREEN);
					cout << " ";
					
				}
				// Skriv ut väggarna
				else if(Room[i][j] == 1)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_BLUE);
					cout << " ";
				}
				// Skriv ut health
				else if(Room[i][j] == 2)
				{
					cout << "+";

				}
				// Skriv ut spelaren
				else if(Room[i][j] == 3)
				{
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BACKGROUND_RED);
					cout << " ";
					
				}
				
				counter ++;
				
			}
		
		}

	
	return 0;
}