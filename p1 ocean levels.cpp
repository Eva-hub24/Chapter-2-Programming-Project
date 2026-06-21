// Program 1: Ocean Levels
// Author: Eva
// Description: Calculates how many millimeters higher the ocean level will be
//              in 5, 7, and 10 years given a rise rate of 1.5 mm per year.

#include <iostream>
using namespace std;

int main() {
    // Constant: ocean rise rate in millimeters per year
    const double RISE_RATE = 1.5;

    // Calculate rise for each time period
    double rise5  = RISE_RATE * 5;
    double rise7  = RISE_RATE * 7;
    double rise10 = RISE_RATE * 10;

    // Display results
    cout << "Ocean Level Rise Projections" << endl;
    cout << "-----------------------------" << endl;
    cout << "In 5 years:  " << rise5  << " mm higher than current level" << endl;
    cout << "In 7 years:  " << rise7  << " mm higher than current level" << endl;
    cout << "In 10 years: " << rise10 << " mm higher than current level" << endl;

    return 0;
}
