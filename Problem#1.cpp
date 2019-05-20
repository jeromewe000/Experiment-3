#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

int main()
{
	cout << "Please Enter 10 numbers" << endl;
	double digits[11], sum = 0, ave, small, large;

	for (int a = 1; a < 11; a++)
	{
		cout << "Entry #" << a << ": ";
		cin >> digits[a];
	}

	for (int a = 1; a < 11; a++)
	{
		sum = sum + digits[a];
	}

	large = digits[1];
	small = digits[1];

	for (int a = 1; a < 11; a++)
	{
		if (digits[a] > large)
			large = digits[a];


		if (digits[a] < small)
			small = digits[a];

	}
	ave = sum / 10;
	cout << "The Sum of All 10 Digits is: " << sum << endl;
	cout << "The Average of All 10 Digits is: " << sum / 10 << endl;
	cout << "The Largest of All 10 Digits is: " << large << endl;
	cout << "The Smalles of All 10 Digits is: " << small;

	getch();
	return 0;
}