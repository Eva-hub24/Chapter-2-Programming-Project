// Program 3: Energy Drink Consumption
// Author: Eva
// Description: Calculates the approximate number of customers who purchase
//              energy drinks weekly, and the subset who prefer citrus flavor.

#include <iostream>
using namespace std;

int main() {
    // Constants
    const int    TOTAL_CUSTOMERS       = 16500;
    const double ENERGY_DRINK_PERCENT  = 0.15;   // 15% purchase energy drinks
    const double CITRUS_PREFER_PERCENT = 0.58;   // 58% prefer citrus flavor

    // Calculate customers who buy energy drinks
    int energyDrinkCustomers = static_cast<int>(TOTAL_CUSTOMERS * ENERGY_DRINK_PERCENT);

    // Calculate customers who prefer citrus flavor (subset of energy drink buyers)
    int citrusCustomers = static_cast<int>(energyDrinkCustomers * CITRUS_PREFER_PERCENT);

    // Display results
    cout << "Energy Drink Consumption Survey Results" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Total customers surveyed: " << TOTAL_CUSTOMERS << endl;
    cout << "Customers purchasing 1+ energy drinks per week: "
         << energyDrinkCustomers << endl;
    cout << "Customers preferring citrus-flavored energy drinks: "
         << citrusCustomers << endl;

    return 0;
}
