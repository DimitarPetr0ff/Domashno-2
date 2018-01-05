// dom2-zad2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

const int SIZE = 6;


int main()
{
	int SQUARE_TABLE[SIZE][SIZE] = { { 11 , 12 , 13 , 14 , 15 , 16 } ,{ 21 , 22 , 23 , 24 , 25 , 26 } ,{ 31 , 32 , 33 , 34 , 35 , 36 } ,{ 41 , 42 , 43 , 44 , 45 , 46 } ,{ 51 , 52 , 53 , 54 , 55 , 56 } ,{ 61 , 62 , 63 , 64 , 65 , 66 } };
	int SUM = 0, TOTAL_SUM = 0;
	for (int ROL = 0, COL = 0; ROL < SIZE;)
	{
		if (SQUARE_TABLE[ROL][COL] % 2 != 0)
		{
			cout << SQUARE_TABLE[ROL][COL];
			SUM += SQUARE_TABLE[ROL][COL];
		}

		if (COL == SIZE - 1)
		{
			TOTAL_SUM += SUM;
			COL = 0;
			cout << "The sum of " << ROL + 1 << " rol is: " << SUM << endl;
			SUM = 0;
			++ROL;
			continue;
		}
		++COL;
	}
	cout << "Total sum is: " << TOTAL_SUM << endl;

    return 0;
}

