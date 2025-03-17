// CSC 134
// m4 lab 1
// Wendy "Lee" Tomlinson
// March 17 2025


#include <iostream>
using namespace std;

int main() {
    
    string pixel = "🥺";   // use any character but Unicode characters have to be strings
    // cout << pixel << endl;

    // three ways ot run a loop
    // 1. while loop
    int count = 0;
    while (count < 10) {
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


    return 0;
}