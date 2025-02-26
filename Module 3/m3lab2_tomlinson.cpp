// CSC 134
// m3lab2 -- grades
// Wendy "Lee" Tomlinson
// Feb 26 2025

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // define variables
    int num_grade;      // 0-100
    string letter_grade;        // "A", "B", "C"
    string response;        // comment on the grade

    // ask for number grade
    cout << "Number grade to letter grade conversion program!" << endl;
    cout << "Enter the number grade: ";
    cin >> num_grade;
    cout << endl;
    
    // find the letter grade
    if (num_grade >=90 && num_grade <=100) {
        letter_grade = "A";
    }
    if (num_grade >=80 && num_grade <= 89) {
        letter_grade = "B";
    }
    if (num_grade >=70 && num_grade <=79) {
        letter_grade = "C";
    }
    if (num_grade >=60 && num_grade <=69){
        letter_grade = "D";
    }
    if (num_grade >=0 && num_grade <=59){
        letter_grade = "F";
    }

    // result responses
    if (letter_grade == "A" || letter_grade == "B") {
        response = "Congrats! Keep at it! :D";
    }
    if (letter_grade == "C" || letter_grade == "D") {
        response = "I believe in you! MAXIMUM EFFORT FOR SUCCESS!";
    }
    else {
        response = "R.I.P T^T";
    }

    // tell user the answer
    cout << "The grade of " << num_grade << " is a letter grade of " << letter_grade << "." << endl;
    cout << response;
    

    return 0;
}