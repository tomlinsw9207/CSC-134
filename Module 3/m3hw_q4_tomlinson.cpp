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

    // generate random numbers and their total
    digit1 = (rand() % MAX) + 1;
    digit2 = (rand() % MAX) + 1;
    total = digit1 + digit2;

    // print numbers as addition problem and ask user 
    cout << "Practice some addition! What does " << digit1 << " + " << digit2 << " = ";
    cin >> usersum;

    // tell user IF answer is correct or incorrect
    if (usersum == total) {
        cout << usersum << " is correct!";
    }
    if (usersum != total) {
        cout << usersum << " is incorrect.";
    }
    



    return 0;
}