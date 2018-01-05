// dom2-zad8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

int fib(int number)
{
	if (number == 0)
	    return 0;

	if (number == 1)
		return 1;
	
    return fib(number - 1) + fib(number - 2);
}

int main()
{
	int number;
	cin >> number;
	while (number < 1 || number > 40)
	{
		cout << "Incorrect input!" << endl;
		cin >> number;
	}
	cout << fib(number) << endl;
    return 0;
}

