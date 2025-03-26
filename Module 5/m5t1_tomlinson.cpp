// CSC 134
// m5 t1
// Wendy "Lee" Tomlinson
// march 26 2025

// create 1 void function and 1 value returning funtion

#include <iostream>
using namespace std;

// declare void functions
void first_message();

int main() {

    cout << "Hello main()!" << endl;
    first_message();        // call function


return 0;
}

// define functions here
void first_message() {
    cout << "Hello from first_message()!" << endl;
}