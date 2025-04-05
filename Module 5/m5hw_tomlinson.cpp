// csc 134
// m5 hw
// Wendy "Lee" Tomlinson
// 2 april 2025

void part1();
void part2();
void part3();
void part4();
void part5();

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int selection; 
    bool keep_going = true;

    while (true == keep_going) {

        cout << endl;
        cout << "Select question part:" << endl;
        cout << "1. part 1, 2. part 2, 3. part 3, 4. part 4, 5. part 5 0. to quit ";
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
        else if (selection == 4) {
            part4();
            cout << endl;
        }
        else if (selection == 5) {
            part4();
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

// FUNCTIONS FOR Q1
double avgRainfall(double num1, double num2, double num3) {
    double avgrainfall = (num1 + num2 + num3) / 3.0;
    return avgrainfall;
}
void part1() {

    double avgrainfall;
    string month1, month2, month3;
    double rfm1, rfm2, rfm3;    // rain fall per month #
    cout << "Please enter 3 months of the year: ";
    cin >> month1;
    cin >> month2;
    cin >> month3;
    cout << endl;
    cout << "Enter the individual rainfall for " << month1 << ", " << month2 << ", " << month3 << ": ";
    cin >> rfm1;
    cin >> rfm2;
    cin >> rfm3;
    cout << setprecision(2) << fixed;
    avgrainfall = avgRainfall(rfm1, rfm2, rfm3);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << avgrainfall;
}

void part2() {
    double length, width, height;
    double volume;
    bool calculate = true;

    cout << "Please enter length: ";
    cin >> length;
    cout << endl;
    cout << "Please enter width: ";
    cin >> width;
    cout << endl;
    cout << "Please enter height: ";
    cin >> height;
    cout << endl;

    while (calculate == true) {

        if (length > 0 && width > 0 && height > 0) {
            volume = length * width * height;
            cout << "The block volume is " << volume << endl;
            calculate = false;
        }
        else {
            cout << "Not valid options. Input posotive values" << endl;
            return part2();
        }

    }
    // ask user for length width height
    // calculate volume of 
    // input validation no side can be zero or less
}
void part3() {}
void part4() {}
void part5() {}