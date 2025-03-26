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
int double_a_number(int number);

int main() {

    cout << "Hello main()!" << endl;
    first_message();        // call function
    string user = "Mike";
    greet_user(user);       // passing the value "mike" not the actual variable of user/name
    cout << "back in main(), the name is " << user << endl;
    int num;
    cout << "Enter and integer: ";
    cin >> num;
    int answer = double_a_number(num);
    cout << "Double that is " << answer << endl;


return 0;
}

// define functions here
void first_message() {
    cout << "Hello from first_message()!" << endl;
}

void greet_user(string name) {
    cout  << "Hello, " << name << " from greet_user(string name)! " << endl;
}

int double_a_number(int number) {
    int answer = number * 2;
    return answer;  // must return an int
}