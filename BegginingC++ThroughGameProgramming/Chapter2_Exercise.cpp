#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void menuChooser()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";

	enum difficulty {EASY, NORMAL, HARD};

	int intChoice;
	difficulty choice;
	cout << "Choice: ";
	cin >> intChoice;

	choice = (difficulty)(intChoice - 1);

	switch (choice)
	{
	case EASY:
		cout << "You picked Easy. \n";
		break;
	case NORMAL:
		cout << "You picked Normal \n";
		break;
	case HARD:
		cout << "You picked Hard \n";
		break;
	default:
		cout << "You made an illegal choice. \n";
		break;
	} 
}

void guessMyNumber()
{
	srand(static_cast<unsigned int>(time(0)));

	string correct;
	int count = 0;

	cout << "Think of a random number between 1 and 100\n";
	while (correct != "y")
	{
		int guess = rand() % 100 + 1;
		cout << "Was this your number: (y/n) \n" << guess << "\n";
		cin >> correct; 
		count++;
	}
	cout << "I guessed it in" << count << "guesses";
}

int main2()
{
	menuChooser();
	guessMyNumber();
	return 0;
}