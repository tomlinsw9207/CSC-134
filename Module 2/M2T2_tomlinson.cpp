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
    string fooditem = "Meowkshake";

// Do the order
    cout << "Welcome to " << storename << endl;
    cout << "You have one " << fooditem << ", that is $" << foodprice << endl;
    cout << endl;
    cout << endl;

// Figure out subtotal and total
    double subtotal, total;
    subtotal = foodprice; // this changes if they buy more
// calculate tax
    double tax = 0.08;
    double taxowed = subtotal * tax; // tax
    total = subtotal + taxowed; // total price

    cout << fixed << setprecision (2); // ensures that there are only two decimal places instead of a million that we don't need or care about

// \t is the tab key, so it places a space without needing to add individual spaces to the code
    cout << "    RECEIPT" << endl;
    cout << "   ---------" << endl;
    cout << endl;
    cout << "1  " << fooditem << endl;
    cout << endl;
    cout << "-----------------" << endl;
    cout << "Subtotal    $" << subtotal << endl;
    cout << "Tax         $" << taxowed << endl;
    cout << "-----------------" << endl;
    cout << "Total       $" << total << endl;
    cout << "-----------------" << endl;
    cout << endl;

// Print the receipt
cout << "Thank you! Have a nice day!" << endl;
cout << endl;
return 0;
}