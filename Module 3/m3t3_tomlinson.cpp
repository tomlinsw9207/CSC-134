// CSC 134
// M3T3 - craps game
// wendy tomlinson
// feb 17 2025
// start with dice rolls
// what dice are you using today?
// 2d6

#include <iostream>
// for sorta random numbers
#include <cmath>
// for actual random numbers
#include <ctime>
using namespace std;

int main() {

    cout << "Let's roll some dice shawty!" << endl;
    int seed = time(0);
    /* cout << "Your seed is: " << seed << endl;
    cout << "Got a lucky number partner? ";
    cin >> seed;
    */
    
    // seed the random number generator
    srand(seed);
    
    // rand() is a large number so we take the remainder which is %
    const int SIDES = 6;
    int dice1, dice2, total;

    dice1 = (rand() % SIDES) + 1;
    cout << "First roll: " << dice1 << endl;

    dice2 = (rand() % SIDES) + 1;
    cout << "Second roll: " << dice2 << endl;

    total = dice1 + dice2;
    cout << "Your total roll is: " << total << endl;

// craps game set up 
// 7 and 11 win
// 2 and 12 lose
// anything else and points come later

    if (total == 7) {
        cout << "Seven is a winner!" << endl;
    }
    else if (total == 11) {
        cout << "Eleven is a winner!" << endl;
    }
    else if (total == 2) {
        cout << "Craps! Too bad, loser." << endl;
    }
    else if (total == 3) {
        cout << "Rotten luck! That's a loss." << endl;
    }
    else if (total == 12) {
        cout << "Craps! Better luck next time!" << endl;
    }


    else {
        cout << "Your point is " << total << ". Roll again." << endl;

        dice1 = (rand() % SIDES) + 1;
        cout << "First roll: " << dice1 << endl;
    
        dice2 = (rand() % SIDES) + 1;
        cout << "Second roll: " << dice2 << endl;
    
        int total2 = dice1 + dice2;
        cout << "Your total roll is: " << total << endl;

            if (total2 == 7) {
                cout << "Craps! You lose." << endl;
            }
            else if (total2 == total) {
                cout << "You win!" << endl;
            }
    }
    return 0;
}