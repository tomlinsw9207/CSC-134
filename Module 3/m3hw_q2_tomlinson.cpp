// CSC 134
// m3hw -- QUESTION 2
// Wendy "Lee" Tomlinson
// Feb 28 2025


#include <iostream>
#include <iomanip> // necessary for the 2 decimals
using namespace std;

int main() {

    cout << "QUESTION 2" << endl;
    
// Set up the varibles
    double foodprice;  // can create input for this later
    string storename = "Meow Palace";
    string fooditem;
   int hereorgo; // dine in or takeaway choice
   cout << fixed << setprecision (2);

// Do the order
    cout << "Welcome to " << storename << endl;
    cout << "Please enter your food item: ";
    cin >> fooditem;
    cout << endl;
    cout << "Please enter the price of the item: ";
    cin >> foodprice;
    cout << "Would you like to dine-in or do takeaway?" << endl;
    cout << "Enter 1 for dine-in or 2 for takeaway: ";
    cin >> hereorgo;
    cout << endl;
    cout << "Your selected the item " << fooditem << " and its price is $" << foodprice;
    cout << endl;


// Figure out subtotal and total
    double subtotal, total, heretotal, gototal;
    subtotal = foodprice; // this changes if they buy more

// calculate tax
    double tax = 0.08; // 8% tax
    double taxowed = subtotal * tax; // tax amount for item
    gototal = subtotal + taxowed;

// calculate tip
    double tip = 0.15;  // 15% tip
    double tipowed = subtotal * tip; // tip amount for item
    heretotal = subtotal + tipowed + taxowed;

// if statements
    if (hereorgo == 1) {
        total = heretotal;
    }
    if (hereorgo == 2) {
        total = gototal;
        tipowed = 0;
    }
    else {
        fooditem = "Invalid dining selection";
        subtotal = 0;
        taxowed = 0;
        tipowed = 0;
        total = 0;
    }


// \t is the tab key, so it places a space without needing to add individual spaces to the code
    cout << "    RECEIPT" << endl;
    cout << "   ---------" << endl;
    cout << endl;
    cout << "1  " << fooditem << endl;
    cout << endl;
    cout << "-----------------" << endl;
    cout << "Subtotal    $" << subtotal << endl;
    cout << "Tax         $" << taxowed << endl;
    cout << "Tip         $" << tipowed << endl;
    cout << "-----------------" << endl;
    cout << "Total       $" << total << endl;
    cout << "-----------------" << endl;
    cout << endl;

// Print the receipt
cout << "Thank you! Have a nice day!" << endl;
cout << endl;
return 0;
}