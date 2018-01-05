// dom2-zad9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;
 
int counter = 0;

int totally_devided(int number)
{
	
	while (number != 0)
	{

		counter += number % 10;
		number /= 10;
	}
	return counter;
}


int main()
{
	int number;
	cin >> number;
	while (number < 111 || number > 22222)
	{
		cout << "Invalid input!" << endl;
		cin >> number;
	}
	if (number % totally_devided(number) == 0)
	{
		cout << "The number is totally devided by its numbers!" << endl;
	}
	else
	{
		cout << "The number is only devided by its numbers but not totally!" << endl;
	}
    return 0;
}

