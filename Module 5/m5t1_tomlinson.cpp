// CSC 134
// m5 t1
// Wendy "Lee" Tomlinson
// march 26 2025

// create 1 void function and 1 value returning funtion

#include <iostream>
using namespace std;

// declare void functions
void first_message();
void greet_user(string name);

int main() {

    cout << "Hello main()!" << endl;
    first_message();        // call function
    string user = "Mike";
    greet_user(user);       // passing the value "mike" not the actual variable of user/name

return 0;
}

// define functions here
void first_message() {
    cout << "Hello from first_message()!" << endl;
}

void greet_user(string name) {
    cout  << "Hello, " << name << endl;
}