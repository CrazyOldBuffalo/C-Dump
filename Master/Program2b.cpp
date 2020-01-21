// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <cctype>
using namespace std;

void Mainmenu();
void Restart();
void Random();
void Sqroot();
void times();

void Restart() //Restarts the program and returns it back to the Mainmenu, using a loop and if statement
{
	bool loop;
	string restart;
	while (loop = true)
	{
		cout << "Would you Like to restart? \n";
		cin >> restart;
		if ((restart == "Yes") || (restart == "yes"))
		{
			loop = false;
			system("CLS");
			Mainmenu();
		}
		else if ((restart == "No") || (restart == "no"))
		{
			break;
			exit;
		}
		else
		{
			cout << "Please Enter either Yes or No" << endl;
		}
	}
}

void Random() // Generates 5 random numbers between 0 & 500 and then prints all of them out.
{
	int random, i;
	srand(time(NULL)); 
	cout << "The Random numbers are: "
	while (i != 5)
	{
		random = rand() % 500 + 1;
		cout << random << endl;
		i++;
	}
	Restart();
}

void Sqroot() // User enters a value that is then square rooted using ther inbuilt function sqrt before outputting
{
	int sqroot, userval1;
	cout << "Please Enter a value to Square Root: \n";
	cin >> userval1;
	sqroot = sqrt(userval1);
	cout << "Square Root of " << userval1 << " = " << sqroot << endl;
	Restart();
}

void times() // User enters a number and the program then  runs through a loop multiplying the users entry by each loop
{
	int i, userval2, result;
	cout << "Please enter a number to multiply: \n";
	cin >> userval2;
	for (int i = 1; i < 11; i++)
	{
		result = userval2 * i;
		cout << userval2 << " * " << i << " = " << result << "\n";
	}
	Restart();
}
void Mainmenu() //uses a switch case for the menu and moves the program to a different function depending on their input
{
	int menu;
	cout << "Main Menu";
	cout << "\n*****************************************************";
	cout << "\n 1: Generate 5 Random Numbers Between 0 & 500";
	cout << "\n 2: Square Root";
	cout << "\n 3: Generate Times Table";
	cout << "\n 4: Exit";
	cout << "\n*****************************************************";
	cout << "\n Select a Number between 1 & 4 from the menu: \n";
	cin >> menu;
	switch (menu)
	{
	case 1:
		cout << "Running Generate 5 Random Numbers.....\n";
		Random();
		break;
	case 2:
		cout << "Running Square Root.......\n";
		Sqroot();
		break;
	case 3:
		cout << "Running Times Table.......\n";
		times();
		break;
	case 4:
		cout << "Quitting.......\n";
		break;
	}
}
int main() // only used to launch the mainmenu function
{
	Mainmenu();
}

