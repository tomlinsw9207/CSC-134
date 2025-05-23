// csc 134
// m5 hw
// Wendy "Lee" Tomlinson
// 2 april 2025

// ADD COUT QUESTION LABELS TO EACH PROGRAM

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
        cout << "1. Question 1" << endl;
        cout << "2. Question 2" << endl;
        cout << "3. Question 3" << endl;
        cout << "4. Question 4" << endl;
        cout << "5. Question 5" << endl;
        cout << "0. QUIT" << endl;
        cout << "Select: ";
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
            part5();
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
    cout << "QUESTION 1" << endl;
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

// FUNCTION FOR Q2
void part2() {
    cout << "QUESTION 2" << endl;
    double length, width, height;
    double volume;
    bool calculate = true;  // to end the loop
    // these could go inside the loop? 
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

        if (length > 0 && width > 0 && height > 0) {    //input validation
            volume = length * width * height;
            cout << "The block volume is " << volume << endl;
            calculate = false;
        }
        else {
            cout << "Not valid options. Input posotive values" << endl;
            return part2();
        }

    }
}

// FUNCTION FOR Q3 ugly :((
void part3() {
    // ask user for an int 1-10
    // display roman numeral version
    cout << "QUESTION 3" << endl;
    int num;
    bool runprogram3 = true;
    cout << "Enter any integer 1 - 10: ";
    cin >> num;
    while (runprogram3 == true) {

        if (num >= 1 && num <= 10) {

            if (num == 1) {
                cout << "The roman numeral for " << num << " is I" << endl;
                runprogram3 = false;
            }
            else if (num == 2) {
                cout << "The roman numeral for " << num << " is II" << endl;
                runprogram3 = false;
            }
            else if (num == 3) {
                cout << "The roman numeral for " << num << " is III" << endl;
                runprogram3 = false;
            }
            else if (num == 4) {
                cout << "The roman numeral for " << num << " is IV" << endl;
                runprogram3 = false;
            }
            else if (num == 5) {
                cout << "The roman numeral for " << num << " is V" << endl;
                runprogram3 = false;
            }
            else if (num == 6) {
                cout << "The roman numeral for " << num << " is VI" << endl;
                runprogram3 = false;
            }
            else if (num == 7) {
                cout << "The roman numeral for " << num << " is VII" << endl;
                runprogram3 = false;
            }
            else if (num == 8) {
                cout << "The roman numeral for " << num << " is VIII" << endl;
                runprogram3 = false;
            }
            else if (num == 9) {
                cout << "The roman numeral for " << num << " is IX" << endl;
                runprogram3 = false;
            }
            else if (num == 10) {
                cout << "The roman numeral for " << num << " is X" << endl;
                runprogram3 = false;
            }
        }
        else {
            cout << "That is not a valid option." << endl;
            cout << endl;
            return part3();
        }
    }   
}
// FUNCTION FOR Q4
void part4() {
    cout << "QUESTION 4" << endl;
    int selection;
    bool runprogram4 = true;
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the area of a circle" << endl;
    cout << "2. Calculate the area of a rectangle" << endl;
    cout << "3. Calculate the area of a triangle" << endl;
    cout << "4. QUIT" << endl;
    cout << "Enter your choice (1 - 4): ";
    cin >> selection;
    cout << endl;

    while (runprogram4 == true) {

        if (selection == 1) {
            // ask for cirlce radius
            double radius;
            double circle_area;
            const double PI = 3.14159;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            if (radius > 0) {
                cout << setprecision(2) << fixed;
                circle_area = radius * radius * PI;
                cout << "The area of the circle = " << circle_area << endl;
                runprogram4 = false;
            }
            else {
                cout << "Radius must be a positive value" << endl;
                cout << endl;
            }
        }
        else if (selection == 2) {
            // ask for rectangle length and width
            double length;
            double width;
            double rectangle_area;
            cout << "Enter rectangle length: ";
            cin >> length;
            cout << endl;
            cout << "Enter rectangle width: ";
            cin >> width;
            if (length > 0 && width > 0) {
                cout << setprecision(2) << fixed;
                rectangle_area = length * width;
                cout << "The area of the rectangle = " << rectangle_area << endl;
                runprogram4 = false;
            }
            else {
                cout << "Length and width must be positive values" << endl;
                cout << endl;
            }
        }
        else if (selection == 3) {
            // ask for triangle base and height
            double base;
            double height;
            double triangle_area;
            cout << "Enter the triangle base: ";
            cin >> base;
            cout << "Enter the triangle height: ";
            cin >> height;
            if (base > 0 && height > 0) {
                cout << setprecision(2) << fixed;
                triangle_area = base * height * .5;
                cout << "The area of the triangle = " << triangle_area << endl;
                runprogram4 = false;
            }
            else {
                cout << "The base and height must be positive values" << endl;
                cout << endl;
            }
        }
        else if (selection == 4) {
            cout << "Quitting program. Bye!" << endl;
            runprogram4 = false;
        }
        else {
            cout << "That is not a valid selection. Choose a number 1 through 4" << endl;
            return part4();
        }
    }
}
// FUNCTION FOR Q5
void part5() {
    cout << "QUESTION 5" << endl;
    int speed;
    double total_time_elapsed;
    double distance_per_hour;
    cout << "Enter the speed of the vehicle (mph): ";
    cin >> speed;
    cout << endl;
    cout << "Enter the hours spent traveling: ";
    cin >> total_time_elapsed;

    int hour = 0;
    while (hour < total_time_elapsed && total_time_elapsed > 0 && speed > 0) {
        hour++;
        distance_per_hour = hour * speed;
        cout << "Hour: " << hour << "   Distance Traveled: " << distance_per_hour << endl;
    }
}