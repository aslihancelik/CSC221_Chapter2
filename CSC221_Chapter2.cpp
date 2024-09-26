// CSC221_Chapter2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Class: CSC 221
//Programmer: Aslihan Celik
//
//


#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    double oceanLevelIn5Years, oceanLevelIn7Years, oceanLevelIn10Years ;

    //Ocean Rise Multiplier per year in millimeters
    const double OCEAN_RISE_MULTIPLIER = 1.5;
    const double OCEAN_LEVEL = 100000; //This is an example value.

    cout << "The current ocean level is " << OCEAN_LEVEL << "." << endl;
    //Prompt the user to enter the current Ocean Level
    //cout << "Please enter the current ocean level." << endl;
    //cin >> oceanLevel;

    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 5 years.
    oceanLevelIn5Years = OCEAN_LEVEL * pow(OCEAN_RISE_MULTIPLIER, 5);
    cout << "The ocean level will be " << oceanLevelIn5Years << "mm in 5 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn5Years - OCEAN_LEVEL << " mm higher than the current level in 5 years." << endl;

}

