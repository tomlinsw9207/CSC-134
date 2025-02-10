// CSC 134
// M2HW1 -- Question 3
// Wendy "Lee" Tomlinson
// February 10 2025


#include <iostream>
using namespace std;

int main()
{
    cout << "Question 3" << endl; // calculate the amount of left over pizza slices after a party
    cout << endl;

// variables
    const int SLICES_PER_GUEST = 3;
    int pizzas, slices_per_pizza, guests;
// prompt for # of pizzas ordered
    cout << "Hello, how many pizzas are you ordering?  ";
    cin >> pizzas;
    cout << endl;
// prompt for # of slices per pizza
    cout << "Great! How many slices per pizza would you like?  ";
    cin >> slices_per_pizza;
    cout << endl;
// prompt for # of guests
    cout << "Cool! How many guests are there?  ";
    cin >> guests;
    cout << endl;
// calculate left over slices
    int total_slices = pizzas * slices_per_pizza;
    int total_eaten = guests * SLICES_PER_GUEST;
    int leftover = total_slices - total_eaten;
// display left over slides
    cout << "You will have " << leftover << " slices of pizza left over!" << endl;

return 0;
}