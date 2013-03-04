// Externa filer
#include "headers.h"

#include <iostream>
using namespace std;


int PlayerMovement(int Room[50][50], int playercordX, int playercordY, int playerdir)
{

	Room[playercordX][playercordY] = 0;

	// Om användaren trycker på W eller w

	if(playerdir == 119 || playerdir == 87 && Room[playercordY - 1][playercordX] == 0)
	{
		playercordY --;
		Room[playercordX][playercordY] = 3;
	}
	// Om användaren trycker på S eller s
	else if(playerdir == 115 || playerdir == 83 && Room[playercordX][playercordY + 1] == 0)
	{
		playercordY ++;
		Room[playercordX][playercordY] = 3;
	}
	// Om användaren trycker på A eller a
	else if(playerdir == 97 || playerdir == 65  && Room[playercordX - 1][playercordY] == 0)
	{
		playercordX --;
		Room[playercordX][playercordY] = 3;
	}
	else if(playerdir == 100 || playerdir == 68 && Room[playercordX + 1][playercordY] == 0)
	{
		playercordX ++;
		Room[playercordX][playercordY] = 3;
	}

	return 0;
}