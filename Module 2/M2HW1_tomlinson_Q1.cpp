// CSC 134
// M2HW1 -- Question 1
// Wendy "Lee" Tomlinson
// February 10 2025


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    cout << fixed << setprecision(2);
    
    cout << "QUESTION 1" << endl; // program that simulates banking transactions
    cout << endl;
// variables
    double start_balance, deposit_amount, withdraw_amount, final_balance;
    int account_number = 15685009;
    string fname;
    string lname;
// prompt for name on the account and display account number
    cout << "Welcome to your bank! Please enter your first and last name: ";
    cin >> fname;
    cin >> lname;
    cout << endl;
    string name = fname + " " + lname;
    cout << "Hello, " << name;
    cout << "! Your account number is: " << account_number << endl;
    cout << endl;
// prompt for start balance
    cout << "Please enter your account balance: $";
    cin >> start_balance;
    cout << endl;
// prompt for deposit amount
    cout << "Please enter desired deposit amount: $";
    cin >> deposit_amount;
    cout << endl;
// prompt for withdraw amount
    cout << "Please enter desired withdrawal amount: $";
    cin >> withdraw_amount;
    cout << endl;
    cout << endl;
// calculate final balance
    final_balance = (start_balance + deposit_amount) - withdraw_amount;
// display final balance
    cout << name << ", your final balance is $" << final_balance << endl;
    cout << "Have a nice day!" << endl;






return 0;
}