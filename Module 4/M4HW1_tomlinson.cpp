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

    cout << "Select question part:" << endl;
    cout << "1. part 1, 2. part 2, 3. part 3" << endl;
    cout << "Type 1 2 or 3: ";
    cin >> selection;

    if (selection == 1) {
        part1();
    }
    else if (selection == 2) {
        part2();
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


