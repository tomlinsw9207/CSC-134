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

    // variation one
    cout << "Hello main()!" << endl;
    first_message();        // call function
    // variation two
    string user = "Mike";
    greet_user(user);       // passing the value "mike" not the actual variable of user/name
    cout << "back in main(), the name is " << user << endl;
    // variation three
    int num;
    cout << "Enter and integer: ";
    cin >> num;
    int answer = double_a_number(num);
    cout << "Double that is " << answer << endl;


return 0;
}

// define functions here

// variation one
void first_message() {
    cout << "Hello from first_message()!" << endl;
}
// variation two
void greet_user(string name) {
    cout  << "Hello, " << name << " from greet_user(string name)! " << endl;
}
// variation three for when its calculating something for you and throwing it back into the main() when its done
int double_a_number(int number) {
    int answer = number * 2;
    return answer;  // must return an int
}