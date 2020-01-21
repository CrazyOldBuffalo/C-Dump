#include <iostream>
#include <string>
using namespace std;


int main() // Takes the two inputs from the user and modulus' them together to find the GCD, then outputs them
{
	int num1 , num2, gcd;
	cout << "Please Enter Value 1: \n";
	cin >> num1;
	cout << "Please Enter Value 2: \n";
	cin >> num2;
	if (num1 == 0)
		return num2;
	gcd = (num2 % num1, num1);
	cout << "Greatest Common Denominator of: "<< num1 << " & " << num2 << " is: " << gcd << endl;
}
