// CSC 134
// M2HW1 -- Question 2
// Wendy "Lee" Tomlinson
// February 10 2025



#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    cout << "Question 2" << endl;
    cout << endl;
// Constants of cost and amount charged
    const double COST_PER_CUBIC_FOOT = 0.3;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

// Variables
    double length, // crate's length
            width, // crate's width
            height, // crates height
            volume, // volume of crate
            cost, // cost of building crate
            charge, // customer charge for the crate
            profit; // profit made on the crate

// set desired output format for numbers
    cout << setprecision(2) << fixed << showpoint;

// Promt user for dimensions
    cout << "Enter the dimensions of the crate (in feet):\n";
// Ask user to input the crate's length
    cout << "Length: ";
    cin >> length;
// Ask user to input the crate's width
    cout << "Width: ";
    cin >> width;
// Ask the user to input the crate's height
    cout << "Height: ";
    cin >> height;

// Calculate the crate's volume
    volume = length * width * height;
// Calculate the cost of building the crate
    cost = volume * COST_PER_CUBIC_FOOT;
// Calculate the customer's charge for the crate
    charge = volume * CHARGE_PER_CUBIC_FOOT;
// Calculate the profit made from the crate
    profit = charge - cost;
    
// Display the crate's volume
    cout << "The volume of the crate is ";
    cout << volume << " cubic feet.\n";
// Display the cost of building the crate
    cout << "Cost to build: $" << cost << endl;
// Display the customer's charge for the crate
    cout << "Charge to customer: $" << charge << endl;
// Display the profit made from the crate
    cout << "Profit: $" << profit << endl;

return 0;
}