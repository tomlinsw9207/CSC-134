// CSC 135
// M4HW
// Wendy "Lee" Tomlinson
// March 24 2025


void part1();
void part2();
void part3();

#include <iostream>
using namespace std;

int main() {

    int selection; 
    bool keep_going = true;

    while (true == keep_going) {

        cout << "Select question part:" << endl;
        cout << "1. part 1, 2. part 2, 3. part 3, 0. to quit" << endl;
        cout << "Type 1, 2, 3, or 0: ";
        cin >> selection;

        if (selection == 1) {
            part1();
            cout << endl;
        }
        else if (selection == 2) {
            part2();
            cout << endl;
        }
        else if (selection == 3){
            part3();
            cout << endl;
        }
        else if (selection == 0) {
            cout << "See ya!" << endl;
            keep_going = false;
            cout << endl;
        }
        else {
            cout << "Not a valid option" << endl;
        }
    }

    return 0;
}


void part1() {

    int const TABLE = 5;
    int n = 0;
    int product;

    while (n < 12) {
        n++;
        product = TABLE * n;
        cout << TABLE << " times " << n << " is " << product << endl;
    }
    
}

void part2() {

    int table; 
    int n = 0;
    int product;

    cout << "Input a number from 1 to 12: ";
    cin >> table;
    cout << endl;

    while (n < 12 && table >= 1 && table <= 12) {
            n++;
            product = table * n;
            cout << table << " times " << n << " is " << product << endl;
    }

}

void part3() {

    int table; 
    int n = 0;
    int product;
    bool okay = false;
    // input validation
    while (okay == false) {

    
    cout << "Input a number from 1 to 12: ";
    cin >> table;
    cout << endl;

        if (table >= 1 && table <= 12) {
            okay = true;
        }
    }

    while (n < 12 && table >= 1 && table <= 12) {
            n++;
            product = table * n;
            cout << table << " times " << n << " is " << product << endl;
    }



}

