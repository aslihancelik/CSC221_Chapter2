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
    const double OCEAN_RISE_PER_YEAR = 1.5;
    const double OCEAN_LEVEL = 1000; //This is an example value.

    cout << "The current ocean level is " << OCEAN_LEVEL << " millimeters." << endl;
    
    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 5 years.
    oceanLevelIn5Years = OCEAN_LEVEL + (OCEAN_RISE_PER_YEAR * 5);
    cout << "The ocean level will be " << oceanLevelIn5Years << "mm in 5 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn5Years - OCEAN_LEVEL << " mm higher than the current level in 5 years." << endl << endl;

    //Calculate the number of millimeters higher than the current level that the ocean’s level will be in 7 years.
    oceanLevelIn7Years = OCEAN_LEVEL + (OCEAN_RISE_PER_YEAR * 7);
    cout << "The ocean level will be " << oceanLevelIn7Years << "mm in 7 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn7Years - OCEAN_LEVEL << " mm higher than the current level in 7 years." << endl << endl;

    // Calculate the number of millimeters higher than the current level that the ocean’s level will be in 10 years.
    oceanLevelIn10Years = OCEAN_LEVEL + (OCEAN_RISE_PER_YEAR * 10);
    cout << "The ocean level will be " << oceanLevelIn10Years << "mm in 10 years." << endl;
    cout << "The ocean level will be " << oceanLevelIn10Years - OCEAN_LEVEL << " mm higher than the current level in 10 years." << endl << endl;

    return 0;
}

