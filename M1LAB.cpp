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
    int apples = 100;
    // price per apples -- 0.25
    double pricePerApple = 0.25;
    // calculate the total price of apples
    // TODO
    double totalPrice = (double) apples * pricePerApple;

    // print all the information about the orchard
    // TODO
    cout << "Welcome to " << name;
    cout << "'s apple orchard!" << endl;
    cout << "We have " << apples;
    cout << " apples in stock." << endl;
    cout << "Apples are currently $";
    cout << pricePerApple << " each." << endl;
    cout << "If you want them all, that will be $" << totalPrice << endl;


return 0;
}