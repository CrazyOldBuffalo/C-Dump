

#include <iostream>
#include <cmath>
using namespace std;

//used to declare the 3 functions used in the program
void userprime();
void prime2000();
void primesum();


int main() // program uses a switch case to allow the user to select one of 3 different operations to run
{
	int userchoice;
	cout << "Main Menu\n";
	cout << "1:		" << "Find if your Number is Prime\n";
	cout << "2:		" << "List the Number of Primes between 100 & 2000\n";
	cout << "3:		" << "Add the sum of Primes between 1000 & 3000\n";
	cout << "***********************************************************************\n" << endl;
	cout << "Choose between 1 & 3: \n";
	cin >> userchoice;
	switch (userchoice)
	{
		case 1:
		{
			cout << "Running Prime of an inputted Integer......... \n";
			userprime();
			break;
		}
		case 2:
		{
			cout << "Running Number of Primes between 100 & 2000......... \n";
			prime2000();
			break;
		}
		case 3:
		{
			cout << "Running Sum of Primes between 1000 & 3000......... \n";
			primesum();
			break;
		}
	}
}

void userprime() // user enters a value which it then runs through a for loop to find if it prime or not
{
	unsigned int userval;
	int i;
	cout << "Please Enter a positive number: \n";
	cin >> userval;
	for (i = 2; i <= userval / 2; i++)
	{
		if (userval % i == 0)
		{
			cout << "This is Not a Prime Number! \n";
			break;
		}
		else
		{
			cout << "This is a Prime Number! \n";
			break;
		}
	}
}

void prime2000() // finds the prime values in a for loop set between 100 & 2000
{
	int total = 0;
	for (int i = 100; i <= 2000; i++)
	{
		for (int n = 2; n * n <= i; n++)
		{
			if (i % n == 0)
				break;
			else if ((int)n + 1 > sqrt(i))
			{
				total++;
			}
		}
	}
	cout << "Total Number of Primes between 100 & 2000 = " << total;

}

void primesum() // performs the same task as before (but between 1000 & 3000) and also adds these together to create the sum of them
{
	int total = 0;
	int sum = 0;
	for (int i = 1000; i <= 3000; i++)
	{
		for (int n = 2; n * n <= i; n++)
		{
			if (i % n == 0)
				break;
			else if ((int)n + 1 > sqrt(i))
			{
				total++;
				sum = sum + i;
			}
		}
	}
	cout << "Total Number of Primes: " << total << endl;
	cout << "Sum of Primes: "<< sum;
}