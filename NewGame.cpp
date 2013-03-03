// Externa filer
#include "headers.h"
#include <conio.h>
#include <iostream>

using namespace std;

int NewGame(int Room[50][50], int x, int y, int n)
{
	// Variabler

	// Spelaren
	int player = 1;
	int playerHealth = 100;
	int playercordX = x;
	int playercordY = y;
	int playerdir = 0;

	// Monster
	int monster = 1;
	int monsteramount = 1;

	// Generera kartan och skriv ut den
	
	CaveGeneration(Room, x, y, n, playercordX, playercordY);

	// Medans användaren lever

	while(playerHealth > 0)
	{
		system("cls");
		DrawMap(Room, x, y, n, playercordX, playercordY);
		cout << playercordX << "  " << playercordY;
		playerdir = _getch();
		Room[playercordY][playercordX] = 0;
		PlayerMovement(Room, playercordX, playercordY, playerdir);
		cout << "x : " << playercordX << "	y : " << playercordY;

	}
	return 0;
}