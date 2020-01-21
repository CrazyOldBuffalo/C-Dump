// Task 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
void fibonacci(int num1, int term1, int term2, int next); // Passes the variables to the next function using a pass by reference.

int main() // Main is only used to declare the variables and inputs for the program.
{
	int num1, term1 = 0, term2 = 1, next = 0;
	cout << "Fibonacci's Sequence" << endl;
	cout << "Please Enter a Number for how many terms: " << endl;
	cin >> num1;
	fibonacci(num1, term1, term2, next);
}

void fibonacci(int num1, int term1, int term2, int next) // Takes the variables and runs it through a for loop (where num1 is the amount of terms) and moves the numbers for each next.
{
	for (int i = 1; i <= num1; i++)
	{
		if (i == 1)
		{
			cout << " " << term1;
			continue;
		}
		if (i == 2)
		{
			cout << term2 << " ";
			continue;
		}
		next = term1 + term2;
		term1 = term2;
		term2 = next;
		cout << next << " ";
	}
}