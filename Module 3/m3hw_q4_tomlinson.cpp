// CSC 134
// m3hw -- QUESTION 4, math practice
// Wendy "Lee" Tomlinson
// March 3 2025

/* TODO: 
The program should generate two single digit numbers at random.
The program should print out the numbers as a simple addition problem.
The program should ask the user to enter the answer.
Finally, the program will tell the user whether or not their answer was correct.*/

#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

int main() {

    cout << "QUESTION 4" << endl;
    cout << endl;


    // set up random number seed
    int seed = time(0);
    srand(seed);

    // variables
    const int MAX = 9;
    int digit1, digit2, usersum, total;

    // generate random numbers
    digit1 = (rand() % MAX) + 1;
    digit2 = (rand() % MAX) + 1;

    // print numbers as addition problem
    cout << "Practice some addition! What is " << digit1 << " + " << digit2 << " ?";
    // ASK user for answer
    cin >> usersum;
    // calculate if correct or incorrect

    // tell user if correct of incorrect



    return 0;
}