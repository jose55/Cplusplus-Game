// Externa filer
#include "headers.h"

#include <conio.h>
#include <iostream>

using namespace std;

int NewGame(int Room[50][50], int x, int y, int n, int playerX, int playerY)
{
	// Generera kartan och skriv ut den
	
	CaveGeneration(Room, x, y, n, playerX, playerY);

	// Skriv ut den initiella kartan

	DrawMap(Room, x, y, n, playerX, playerY);

	// Medans Player funktionen retunerar 1
	while(Player(x, y, Room, n) == 1) 
	{
		// Anropar funktionen f�r spelaren
		Player(x, y, Room, n); 
		// Rensar konsol f�nstret
		system("cls");
		// Skriver ut kartan igen
		DrawMap(Room, x, y, n, playerX, playerY);

	}

	return 0;
}