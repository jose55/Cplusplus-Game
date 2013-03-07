// Externa filer
#include "headers.h";

#include <iostream>
using namespace std;

int NewMap(int Room[50][50])
{
	// Variabler
	int x = 0, y;


	for(int i = 0; i < 50; i ++)
	{
		if(Room[50][i] == 0)
		{
			y = i;
		}

	}
	
	CaveGeneration(Room, x, y, 50, x, y);

	return 0;
}