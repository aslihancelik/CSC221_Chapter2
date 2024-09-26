// CSC221_Chapter2.cpp : This file contains the 'main' function. This is a program that calculates 
// the number of miles per gallon the car gets. The program first asks the user for the input of 
// number of gallons and the miles driven. Then the program calculates the miles per gallon with 
// the input. Lastly, program displays the result.
//
//
// Course: CSC 221
// Programmer: Aslihan Celik
// Date: 09/26/2024
// Assignment: Chapter 2 Exercise 10 Revision

#include <iostream>
using namespace std;

int main()
{
	//The gasoline amount that the car currently holds
	double gallons;
	//The miles that the car can travel with the current gasoline amount in its tank
	double miles_driven;
	//Variable to hold the miles per gallon the car can travel
	double miles_per_gallon;

	//Prompt the user to enter number of gallons
	cout << "Please enter the number of gallons." << endl;
	cin >> gallons;
	cout << "The entered number of gallons is: " << gallons << endl;

	//Prompt the user to enter miles per gallon.
	cout << "Please enter the miles driven." << endl;
	cin >> miles_driven;
	cout << "The entered miles driven is: " << miles_driven << endl;

	//Calculates the number of miles per gallon the car gets
	miles_per_gallon = miles_driven / gallons;

	//Output the result 
	cout << "The number of miles per gallon the car gets is " << miles_per_gallon << "." << endl;

	return 0;
}
