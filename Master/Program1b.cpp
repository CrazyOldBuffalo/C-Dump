// Task1b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// Makes the 3 words globals so that they can be used throughout the program
string word1, word2, word3;

void input() // Takes User inputs and Also converts to a Lower string (for capital letters, etc)
{
	cout << "Enter Word 1: \n";
	cin >> word1;
	for_each(word1.begin(), word1.end(), [](char & a)
	{
		a = tolower(a);
	});
	cout << "Enter Word 2: \n";
	cin >> word2;
	for_each(word2.begin(), word2.end(), [](char & a)
	{
		a = tolower(a);
	});
	cout << "Enter Word 3: \n";
	cin >> word3;
	for_each(word3.begin(), word3.end(), [](char & a)
	{
		a = tolower(a);
	});
}

void alphabetical() // Sorts the strings alphabetically by swapping the first value if it is larger.
{
	if (word1 > word2)
	{
		std::swap(word1, word2);
	}
	if (word2 > word3)
	{
		std::swap(word2, word3);
	}
	if (word1 > word2)
	{
		std::swap(word1, word2);
	}
	cout << "Sorting Alphabetically...............\n";
}
void output() // Outputs the Words to the user
{
	cout << word1 << '\n';
	cout << word2 << '\n';
	cout << word3 << '\n';
}

int main() // Is only used to store the functions & Call it
{
	cout << "Enter 3 Words to Sort Alphabetically \n";
	input();
	alphabetical();
	output();
}

