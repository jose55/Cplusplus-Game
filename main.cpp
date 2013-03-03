/*
Cave story
Av: André Andersson
Användaren spawnas i en random grotta med monster och items i
2013-02-12/
*/

// Change Log
/*
v.0001
Genererar grottor
*/

// Saker som behöver fixas
/*
Större kontroll över skapandet av grottorna
Items & Monster
Spelare
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;


int drawmap(int Room[50][50], int x, int y, int n, int playercordX, int playercordY)
{
  int counter = 0;

	// Skriv ut grottan

	for(int i = 0; i < n; i ++)
		{
			for(int j = 0; j < n; j ++)
			{
				if(counter == 50) // Om räknaren är 50
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

int cavegeneration (int Room[50][50], int x, int y, int n, int playercordX, int playercordY)
{
	srand(time(NULL)); // Sätter seedet för kartan // srand(siffra) för en definerad karta // srand(time(NULL)) för en random
	
	int direction = 0;
	int recentdirection = 0;
	int road = 0;

		// Fyll Grottan
	for(int i = 0; i < n; i ++)
	{
		for(int j = 0; j < n; j ++)
		{
			Room[j][i] = 1;
		}

	}

	// Generera gångarna i grottan
	while( road <= 200 && x < 50 && y < 45 && x > 1 && y > 1)
	{
		direction = rand() % 3;

			switch(direction)
			{
			case 0: // Nord
			
			Room[x][y - 1] = 0; 
			Room[x][y + 1] = 0;
			road ++;
			y --;
		
			break;

			case 1: // Öst
			
			Room[x + 1][y] = 0;
			Room[x - 1][y] = 0;
			road ++;
			x ++;

			break;

			case 2: // Syd
			
			Room[x][y + 1] = 0;
			Room[x][y - 1] = 0;
			y ++;
			road ++;

			break;

			case 3: // Väst
			
			Room[x - 1][y] = 0;
			Room[x + 1][y] = 0;
			x --;
			road ++;
		
			break;
			}
		
	}
	
	playercordX = x;
	playercordY = y;


	return 0;
}
/*
void playermovment(int Room[50][50], int playercordX, int playercordY, int playerdir)
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

}
*/

int newgame(int Room[50][50], int x, int y, int n)
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
	
	cavegeneration(Room, x, y, n, playercordX, playercordY);

	// Medans användaren lever

	while(playerHealth > 0)
	{
		system("cls");
		drawmap(Room, x, y, n, playercordX, playercordY);
		cout << playercordX << "  " << playercordY;
		playerdir = getch();
		Room[playercordY][playercordX] = 0;
	
		
		
		if(playerdir == 119 && Room[playercordY - 1][playercordX] == 0)
		{
			playercordY --;
			Room[playercordY][playercordX] = 3;
		}
		else if(playerdir == 115 && Room[playercordY + 1][playercordX] == 0)
		{
			playercordY ++;
			Room[playercordY][playercordX] = 3;
		}
		else if(playerdir == 97 && Room[playercordY][playercordX - 1] == 0)
		{
			playercordX --;
			Room[playercordY][playercordX] = 3;
		}
		else if(playerdir == 100 && Room[playercordY][playercordX + 1] == 0)
		{
			playercordX ++;
			Room[playercordY][playercordX] = 3;
		}
		
	}
	return 0;
}

int main (){

	// Variabler
	
	
	// Grotta
	int Room[50][50];
	double version = 0.002;
	int n = 50;
	int direction = 0; // 0 = Nord // 1 = East // 2 = South // 3 = West
	int counter = 0;
	int x = 5;
	int y = 25;
	char name = 0;

	/*

	// Meny
	int meny = 0;
	int difficulty = 0; // 0 = Easy // 1 = Medium // 2 = Hard

	// Logga
	cout << " _______  _______  _______  _                 _        _       _________ _        _______  " << endl;
	Sleep(500);
	cout << "(  ____ \\(  ____ )(  ____ \\( \\      |\\     /|( (    /|| \\    /\\\\__   __/( (    /|(  ____ \\ " << endl;
	Sleep(500);
	cout << "| (    \\/| (    )|| (    \\/| (      | )   ( ||  \\  ( ||  \\  / /   ) (   |  \\  ( || (    \\/ " << endl;
	Sleep(500);
	cout << "| (_____ | (____)|| (__    | |      | |   | ||   \\ | ||  (_/ /    | |   |   \\ | || |       " << endl;
	Sleep(500);
	cout << "(_____  )|  _____)|  __)   | |      | |   | || (\\ \\) ||   _ (     | |   | (\\ \\) || | ____  " << endl;
	Sleep(500);
	cout << "      ) || (      | (      | |      | |   | || | \\   ||  ( \\ \\    | |   | | \\   || | \\_  ) " << endl;
	Sleep(500);
	cout << "/\\____) || )      | (____/\\| (____/\\| (___) || )  \\  ||  /  \\ \\___) (___| )  \\  || (___) | " << endl;
	Sleep(500);
	cout << "\\_______)|/       (_______/(_______/(_______)|/    )_)|_/    \\/\\_______/|/    )_)(_______) " << endl;
	cout << endl;

	cout << "Loadning : ";
	for(int i = 0; i < 10; i ++){

		cout << "||";
		Sleep(500);
	}
	cout << endl << endl;
	cout << "Welcome to Spelunking v" << version << endl;
	cout << "1. Start a New Game" << endl;
	cout << "2. ScoreBoard" << endl;
	cout << "3. Quit" << endl;
	cin >> meny;

	switch(meny)
	{
	case 1:
	*/

		newgame(Room, x, y, n);
	/*
	break;

	case 2:
		cout << "ScoreBoard!";

	break;

	case 3:

		return 0;

	break;

	default:
		cout << "The number you have entered are invalid. Please try again!" << endl;
		cin >> meny;




	}

	

	cavegeneration(Room, x, y, n); // Anropar funktionen för att generera grottan
	drawmap(Room, x , y , n);
		
			cin.get();
			system("cls");

	
	*/
	
	cout << endl << endl; // Extra rader

	return 0;
}
