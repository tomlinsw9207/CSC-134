// CSC 134
// M4T1 -- WHILE LOOPS
// Wendy "Lee" Tomlinson
// March 5 2025


#include <iostream>
using namespace std;

// function declarations
void program1();    // Gaddis program 5-3
void program2();    // Gaddis program 5-6

// main function
int main() {


    // variables
    int choice;
    bool keep_going = true;

    // while loop
    while (true == keep_going) {

        cout << endl;
        cout << "M4T1 part 1 and part 2" << endl;
        cout << "1. Gaddis program 5-3 (part 1)" << endl;
        cout << "2. Gaddis program 5-6 (part 2)" << endl;
        cout << "3. Quit ";
        
        cin >> choice;
        if (choice == 1) {
            cout << endl;
            program1();
        }
        else if (choice == 2) {
            cout << endl;
            program2();
        }
        else if (choice == 3) {
            cout << endl;
            cout << "Caio, I guess." << endl;
            keep_going = false; // immediate exit
        }
        else {
            cout << endl;
            cout << "Not a valid option";
        }
    }
   
    return 0;
}

// demonstrates simple while loop (Gaddis 5-3)
void program1() {
    
    int number = 0;

    while (number <= 7) {
        cout << "Howdy!" << endl;
        number++;
    }
    cout << "That's all, Partner!" << endl;

}

// loop control variable (Gaddis 5-6)
void program2() {
    cout << "Program goes here";
}