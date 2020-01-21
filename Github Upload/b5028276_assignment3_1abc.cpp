// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

void digit() // contains several variables for working out if a digit contains either 2 or 8
{
	int total = 0;
	int icount = 0;
	int tens, hundreds, thousands, average; //variables used for the different digits

	for (int i = 1000; i <= 2000; i++) // counter that moves through all numbers between 1000 & 2000
	{
		if ((i % 10 == 2) || (i % 10 == 8)) // covers the first digit and adds to total 
		{
			icount++;
			total = total + i;
		}
		tens = i / 10;
		if ((tens % 10 == 2) || (tens % 10 == 8)) // covers the 10's and does the same as above, this continues below
		{
			icount++;
			total = total + i;
		}
		hundreds = i / 100;
		if ((hundreds % 10 == 2) || (hundreds % 10 == 8))
		{
			icount++;
			total = total + i;
		}
		thousands = i / 1000;
		if ((thousands % 10 == 2) || (thousands % 10 == 8))
		{
			icount++;
			total = total + i;
		}
	}
	average = total / icount; // works out the average
	cout << "Numbers that contain a 2 or 8 digit: " << icount << endl; // prints the total numbers containing the digits
	cout << "Total sum is: " << total << endl; // prints the sum of these
	cout << "Average: " << average; //prints the average
}

int main() // Is only used to load the digit function
{
	digit();
}

