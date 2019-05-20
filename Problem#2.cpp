#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
	int provinceA[7];
	int provinceB[7];
	int provinceC[7];

	cout << "Enter the temperature of Province A\n";
	for (int a = 1; a < 8; a++)
	{
		cout << "Province A, Day " << a << ": ";
		cin >> provinceA[a];
	}

	cout << " \n";
	cout << "Enter the temperature of Province B\n";
	for (int b = 1; b < 8; b++)
	{
		cout << "Province b, Day " << b << ": ";
		cin >> provinceB[b];
	}

	cout << " \n";

	cout << "Enter the temperature of Province C\n";
	for (int c = 1; c < 8; c++)
	{
		cout << "Province C, Day " << c << ": ";
		cin >> provinceC[c];
	}

	cout << "Displaying Values of Temperatures: \n";

	for (int x = 1; x < 8; x++)
	{
	cout << "Province A, Day " << x << " :" << provinceA[x] << endl;
	}
	for (int y = 1; y < 8; y++)
	{
	cout << "Province B, Day " << y << " :" << provinceB[y] << endl;
	}
	for (int z = 1; z < 8; z++)
	{
	cout << "Province C, Day " << z << " :" << provinceC[z] << endl;
	}

	getch();
	return 0;

}