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
#include <conio.h>
#include <Windows.h>

// Externa filer

#include "headers.h"


using namespace std;

int main (){

	// Variabler
	
	// Grotta
	int Room[50][50];
	double version = 0.001;
	int n = 50;
	int direction = 0; // 0 = Nord // 1 = East // 2 = South // 3 = West
	int counter = 0;
	int y = 25;
	int x = 2;
	char name = 0;

	while(1)
	{
		system("cls");
		CaveGeneration(Room, x, y, n, 1, 1);
		DrawMap(Room, x, y, n, 1, 1);
		Sleep(500);
	}

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

		NewGame(Room, x, y, n);


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
