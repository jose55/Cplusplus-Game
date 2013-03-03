// Externa filer
#include "NewGame.h"
#include "DrawMap.h"
#include "CaveGeneration.h"
#include "PlayerMovment.h"

#include <iostream>
using namespace std;


int PlayerMovment(int Room[50][100], int playercordX, int playercordY, int playerdir)
{
	Room[playercordX][playercordY] = 0;
	if(playerdir == 119 && Room[playercordX][playercordY - 1] == 0)
	{
		playercordY --;
		Room[playercordX][playercordY] = 3;
	}
	else if(playerdir == 115 && Room[playercordX][playercordY + 1] == 0)
	{
		playercordY ++;
		Room[playercordX][playercordY] = 3;
	}
	else if(playerdir == 97 && Room[playercordX - 1][playercordY] == 0)
	{
		playercordX --;
		Room[playercordX][playercordY] = 3;
	}
	else if(playerdir == 100 && Room[playercordX + 1][playercordY] == 0)
	{
		playercordX ++;
		Room[playercordX][playercordY] = 3;
	}

	return 0;
}