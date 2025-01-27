// CSC 134
// M1LAB
// Lee Tomlinson
// January 27 2025

#include <iostream>
using namespace std;

int main()
{
    // this program will simulate an apple orchard
    // the owner's name -- Lee Tomlinson
    string name = "Lee Tomlinson";
    // number of apples owned -- 100
    int bananas = 100;
    // price per apples -- 0.25
    double pricePerBanana = 0.25;
    // calculate the total price of apples
    // TODO
    double totalPrice = (double) bananas * pricePerBanana;

    // print all the information about the orchard
    // TODO
    cout << "Welcome to " << name;
    cout << "'s banana orchard!" << endl;
    cout << "We have " << bananas;
    cout << " bananas in stock." << endl;
    cout << "Bananas are currently $";
    cout << pricePerBanana << " each." << endl;
    cout << "If you want all them banaynays, that will cost you a whopping $" << totalPrice << endl;


return 0;
}