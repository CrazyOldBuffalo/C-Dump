// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
// Addition of 4 extra modules to perform extra tasks = such as data validation and the sorting of the inputs
#include <algorithm>
#include <cctype>
#include <functional>
#include <limits>
using namespace std;
// Use of 3 Global Variables for all 3 Numbers and for the reset loop
int n1, n2, n3;
string reset;
// Declaration of the 3 Functions used in the program
void sorting();
void Output();
void tryagain();

int main() // Main is used to take the inputs from the user and also to ensure that the inputs are valid 
{
	cout << "This program will Sort 3 Numbers\n";
	cout << "Please Enter 3 Numbers: \n";
	cin >> n1 >> n2 >> n3;
	while (1)
	{
		if (cin.fail())
		{
			cin.clear();
			system("CLS");
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "That is Not a Number! \n" << "Please Enter 3 Numbers:" << endl;
			cin >> n1 >> n2 >> n3;
		}
		if (!cin.fail())
		{
			break;
		}
	}
	sorting();
}

void sorting() // Program sorts the three values using if statements and then swap to change the order of the values.
{
	if (n1 < n2)
	{
		swap(n1, n2);
	}
	if (n2 < n3)
	{
		swap(n2, n3);
	}
	if (n1 < n2)
	{
		swap(n1, n2);
	}
	Output();
}
void Output() // Is only used to output the 3 values after they have been sorted
{
	cout << "Sorting ..........\n";
	cout << n1 << "\n" << n2 << "\n" << n3 << "\n";
	tryagain();
}

void tryagain() // simple while loop that sends the user back to the beginning of the program once complete
{
	while (1)
	{
		cout << "Would you Like to try again? \n";
		cin >> reset;
		if ((reset == "yes") || (reset == "y"))
		{
			system("CLS");
			main();

		}
		else if ((reset == "no") || (reset == "n"))
		{
			break;
		}
		else
		{
			cout << "Please Enter yes or no \n";
		}
	}
}

