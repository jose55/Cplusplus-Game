// Externa filer
#include "headers.h"

#include <conio.h>
#include <iostream>

using namespace std;

int NewGame(int Room[50][50], int x, int y, int n, int playerX, int playerY)
{
	// Variabler

	// Generera kartan och skriv ut den
	
	CaveGeneration(Room, x, y, n, playerX, playerY);

	// Skriv ut den initiella kartan

	DrawMap(Room, x, y, n, playerX, playerY);

	while(Player(x, y, Room) == 1) // Medans Player funktionen retunerar 1
	{
		Player(x, y, Room);
		system("cls");
		DrawMap(Room, x, y, n, playerX, playerY);

	}




	

	return 0;
}