// Udemy_Unreal_24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "Enter a positive or negative integer: ";
	int input;
	cin >> input;
	if (input == 0)
	{
		cout << "You entered zero." << endl;
	}
	else if (input < 0)
	{
		cout << "You entered a number less than zero." << endl;
	}
	else
	{
		cout << "You entered a number above zero." << endl;
	}

	return 0;
}
