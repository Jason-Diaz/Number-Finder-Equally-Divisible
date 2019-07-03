// ConsoleApplication3.cpp : Defines the entry point for the console application.
// Jason Diaz Problem 3

#include "stdafx.h"
#include "iostream"

using namespace std;

int counter = 2; // The value being checked. Starts at the first possitive integer
double temp = 0; // Used to check mod
bool remainderFlag = 1; // Used for while loop initiated to True 

int main()
{
	while(remainderFlag == 1) // While the remainderFlag is true we must keep searching for the integer

	for (int i = 1; i <= 14; i++) // loop from 1 to 14
	{
		remainderFlag = 0; // reset the remainderFlag
			temp = counter % i; // check for a remainder from the current possitive interger divided by the loop position
			if (temp != 0) // if there is a remainder
			{
				i = 1; // loop is reset
				counter += 2; // the current positive gets updated to the next positive integer
			}
		}
	
	cout << counter << endl;
	cin.get();
	return 0;


}



