
// Externa filer
#include "NewGame.h"
#include "CaveGeneration.h"
#include "DrawMap.h"
#include "PlayerMovment.h"


#include <conio.h>
#include <iostream>

using namespace std;

int NewGame(int Room[50][50], int x, int y, int n)
{
	// Variabler

	// Spelaren
	int player = 1;
	int playerHealth = 100;
	int playercordX = 0, playercordY = 0;
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
		PlayerMovment(Room, playercordX, playercordY, playerdir);

	}
	return 0;
}