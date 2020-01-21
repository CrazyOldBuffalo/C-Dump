
#include <iostream>
#include <string>
using namespace std;

// Declaration of Functions
void Day(int& Month, int& Date);
void Jan(int& Date);
void Feb(int& Date);
void Mar(int& Date);
void Apr(int& Date);
void May(int& Date);
void Jun(int& Date);
void Jul(int& Date);
void Aug(int& Date);
void Sep(int& Date);
void Oct(int& Date);
void Nov(int& Date);
void Dec(int& Date);

void Day(int& Month, int& Date) // Switch Case that changes the function depending on the numerical month entered
{
	switch (Month)
	{
	case 1:
	{
		Jan(Date);
		break;
	}
	case 2:
	{
		Feb(Date);
		break;
	}
	case 3:
	{
		Mar(Date);
		break;
	}
	case 4:
	{
		Apr(Date);
		break;
	}
	case 5:
	{
		May(Date);
		break;
	}
	case 6:
	{
		Jun(Date);
		break;
	}
	case 7:
	{
		Jul(Date);
		break;
	}
	case 8:
	{
		Aug(Date);
		break;
	}
	case 9:
	{
		Sep(Date);
		break;
	}
	case 10:
	{
		Oct(Date);
		break;
	}
	case 11:
	{
		Nov(Date);
		break;
	}
	case 12:
	{
		Dec(Date);
		break;
	}
	}
}

void Jan(int& Date) // Formula (Modulus) for sorting the day depending on the Date given (this is the same for every month function, and only changes the order depending on the month)
{
	if ((Date % 7 == 6)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 0)) cout << Date << " Is Monday";
	else if ((Date % 7 == 1)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 2)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 3)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 4)) cout << Date << " Is Friday";
	else if ((Date % 7 == 5)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Feb(int& Date)
{
	if ((Date % 7 == 3)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 4)) cout << Date << " Is Monday";
	else if ((Date % 7 == 5)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 6)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 0)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 1)) cout << Date << " Is Friday";
	else if ((Date % 7 == 2)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Mar(int& Date)
{
	if ((Date % 7 == 3)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 4)) cout << Date << " Is Monday";
	else if ((Date % 7 == 5)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 6)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 0)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 1)) cout << Date << " Is Friday";
	else if ((Date % 7 == 2)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Apr(int& Date)
{
	if ((Date % 7 == 0)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 1)) cout << Date << " Is Monday";
	else if ((Date % 7 == 2)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 3)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 4)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 5)) cout << Date << " Is Friday";
	else if ((Date % 7 == 6)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void May(int& Date)
{
	if ((Date % 7 == 5)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 6)) cout << Date << " Is Monday";
	else if ((Date % 7 == 0)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 1)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 2)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 3)) cout << Date << " Is Friday";
	else if ((Date % 7 == 4)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Jun(int& Date)
{
	if ((Date % 7 == 2)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 3)) cout << Date << " Is Monday";
	else if ((Date % 7 == 4)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 5)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 6)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 0)) cout << Date << " Is Friday";
	else if ((Date % 7 == 1)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Jul(int& Date)
{
	if ((Date % 7 == 0)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 1)) cout << Date << " Is Monday";
	else if ((Date % 7 == 2)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 3)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 4)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 5)) cout << Date << " Is Friday";
	else if ((Date % 7 == 6)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Aug(int& Date)
{
	if ((Date % 7 == 4)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 5)) cout << Date << " Is Monday";
	else if ((Date % 7 == 6)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 0)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 1)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 2)) cout << Date << " Is Friday";
	else if ((Date % 7 == 3)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Sep(int& Date)
{
	if ((Date % 7 == 1)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 2)) cout << Date << " Is Monday";
	else if ((Date % 7 == 3)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 4)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 5)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 6)) cout << Date << " Is Friday";
	else if ((Date % 7 == 0)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Oct(int& Date)
{
	if ((Date % 7 == 6)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 0)) cout << Date << " Is Monday";
	else if ((Date % 7 == 1)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 2)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 3)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 4)) cout << Date << " Is Friday";
	else if ((Date % 7 == 5)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}

void Nov(int& Date)
{
	if ((Date % 7 == 3)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 4)) cout << Date << " Is Monday";
	else if ((Date % 7 == 5)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 6)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 0)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 1)) cout << Date << " Is Friday";
	else if ((Date % 7 == 2)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}
void Dec(int& Date)
{
	if ((Date % 7 == 1)) cout << Date << " Is Sunday";
	else if ((Date % 7 == 2)) cout << Date << " Is Monday";
	else if ((Date % 7 == 3)) cout << Date << " Is Tuesday";
	else if ((Date % 7 == 4)) cout << Date << " Is Wednesday";
	else if ((Date % 7 == 5)) cout << Date << " Is Thursday";
	else if ((Date % 7 == 6)) cout << Date << " Is Friday";
	else if ((Date % 7 == 0)) cout << Date << " Is Saturday";
	else cout << "This is not a Valid Date";
}
int main() // main is only used to contain the variables (which are passed through to each function) and take the inputs from the user.
{
	int Month, Date;
	cout << "This Program will find the day of a chosen Date!" << endl;
	cout << "Please Enter a Month (Numerically) between 1 & 12: " << endl;
	cin >> Month;
	cout << "Please Enter a Date: " << endl;
	cin >> Date;
	Day(Month, Date);
}

