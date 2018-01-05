// dom2-zad1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

const int SIZE = 6;

int main()
{
	int SQUARE_TABLE[SIZE][SIZE] = { { 11 , 12 , 13 , 14 , 15 , 16 } , { 21 , 22 , 23 , 24 , 25 , 26 } , { 31 , 32 , 33 , 34 , 35 , 36 } , { 41 , 42 , 43 , 44 , 45 , 46 } , { 51 , 52 , 53 , 54 , 55 , 56 } , { 61 , 62 , 63 , 64 , 65 , 66 } };
	int SUM = 0, TOTAL_SUM = 0;
	for (int ROL = 0; ROL < SIZE; ++ROL)
	{
		for (int COL = 0; COL < SIZE; ++COL)
		{
			if (ROL % 2 != 0)
			{
				cout << SQUARE_TABLE[ROL][COL];
				SUM += SQUARE_TABLE[ROL][COL];
			}
		}
		if (ROL % 2 != 0)
		{
			cout << "The sum is: " << SUM << endl;
			TOTAL_SUM += SUM;
			SUM = 0;
		}
	}
	cout << "Total sum is: " << TOTAL_SUM << endl;



	/*int number;
	cin >> number;
	if (number < 1)
	{
		cout << "incorrect input";
		return 1;
	}
	else
	{
		while (number % 10 == number / 10 % 10)
		{
			number++;
			cout << number;
		}

		/*while (number >=10)
		{
			if (number % 10 != number / 10 % 10)
			{
				cout << "bad input";

				return 1;
			}
		   number /= 10;
		}
		//cout << "good input";
    } */
	

    return 0;
}

