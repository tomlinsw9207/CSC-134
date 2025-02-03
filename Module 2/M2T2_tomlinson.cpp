// CSC 134
// M2T2 - receipt assignment or whateva
// Wendy "Lee" Tomlinson
// February 2 2025

// making a simple sales program that prints a correctly formatted receipt
// must include:
// price before tax
// amount of tax owed (8%) or 0.08
// the total including the tax

#include <iostream>
#include <iomanip> // necessary for the 2 decimals
using namespace std;

int main() {
// Set up the varibles
    double foodprice = 5.99;  // can create input for this later
    string storename = "Meow Palace";

// Do the order
    cout << "Welcome to " << storename << endl;
    cout << "You have one Meowkshake, that is $5.99" << endl;

// Figure out subtotal and total

// Print the receipt
cout << "Thank you! Have a nice day!" << endl;
return 0;
}