// CSC 134
// m4 lab 1
// Wendy "Lee" Tomlinson
// March 17 2025


#include <iostream>
using namespace std;

int main() {
    
    string pixel = "🥺";   // use any character but Unicode characters have to be strings
    // cout << pixel << endl;

    int WIDTH;
    int HEIGHT;
    
    cout << "Enter width: ";
    cin >> WIDTH;
    cout << endl;
    cout << "Enter height: ";
    cin >> HEIGHT; 
    cout << endl;

    // three ways ot run a loop
    // 1. while loop
    int count = 0;
    while (count < 5) {
        cout << pixel;
        count++;
    }
    cout << endl;

    // 2. do while loop
    count = 0;
    do {
        cout << pixel << " ";
        count++;
    } while (count < 5);
    cout << endl;

    // 3. for loop
    // one time that using i as a variable is okay
    // i standsd for index
    cout << endl;
    cout << pixel << " printed horizontally (row)" << endl;
    for (int i = 0; i < WIDTH; i++) {
        cout << pixel << " ";
    }
    cout << endl;
    cout << pixel << " printed verticaly (column)" << endl;
    for (int i = 0; i < HEIGHT; i++) {
        cout << pixel << endl;
    }
    cout << endl << "Printing a box " << WIDTH << " by " << HEIGHT << endl;

    // this is a nested loop
    // for each row
    for (int h = 0; h < HEIGHT; h++) {
        // print the current row
        for (int w = 0; w < WIDTH; w++) {
            cout << pixel << " ";
        }
        // go to the next line
        cout << endl;
    }


    return 0;
}