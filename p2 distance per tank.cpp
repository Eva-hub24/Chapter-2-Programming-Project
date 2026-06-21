// Program 2: Distance per Tank of Gas
// Author: Eva
// Description: Calculates the distance a car can travel on one full tank of gas
//              when driven in town vs. on the highway.

#include <iostream>
using namespace std;

int main() {
    // Constants
    const double TANK_SIZE     = 20.0;  // gallons
    const double TOWN_MPG      = 23.5;  // miles per gallon in town
    const double HIGHWAY_MPG   = 28.9;  // miles per gallon on highway

    // Calculate distances using: Distance = Gallons x Miles per Gallon
    double distanceTown    = TANK_SIZE * TOWN_MPG;
    double distanceHighway = TANK_SIZE * HIGHWAY_MPG;

    // Display results
    cout << "Distance per Tank of Gas" << endl;
    cout << "-------------------------" << endl;
    cout << "Tank size: " << TANK_SIZE << " gallons" << endl;
    cout << "In-town distance (at " << TOWN_MPG << " mpg):    "
         << distanceTown << " miles" << endl;
    cout << "Highway distance (at " << HIGHWAY_MPG << " mpg):  "
         << distanceHighway << " miles" << endl;

    return 0;
}
