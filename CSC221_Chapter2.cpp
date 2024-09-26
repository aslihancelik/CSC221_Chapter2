// CSC221_Chapter2.cpp : This file contains the 'main' function. This is a program that calculates 
// the number of miles per gallon the car gets. Program displays the result.
//
//
// Course: CSC 221
// Programmer: Aslihan Celik
// Date: 09/26/2024

#include <iostream>
using namespace std;

int main()
{
	//The gasoline amount that the car currently holds
	const double CURRENT_GAS = 15;
	//The miles that the car can travel with the current gasoline amount in its tank
	const double CURRENT_MILES_TRAVEL = 375;
	//Variable to hold the miles per gallon the car can travel
	double miles_per_gallon;

    //Calculates the number of miles per gallon the car gets
	miles_per_gallon = CURRENT_MILES_TRAVEL / CURRENT_GAS;

	//Output the result 
	cout << "The number of miles per gallon the car gets is " << miles_per_gallon << "." << endl;

	return 0;
}

