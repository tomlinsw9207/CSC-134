// CSC 134
// m3lab2 -- grades
// Wendy "Lee" Tomlinson
// Feb 26 2025

#include <iostream>
using namespace std;

int main() {

    // define variables
    int num_grade;      // 0-100
    string letter_grade;        // "A", "B", "C"

    // ask for number grade
    cout << "Number grade to letter grade conversion program!" << endl;
    cout << "Enter the number grade: ";
    cin >> num_grade;
    cout << endl;

    // find the letter grade
    if (num_grade >=90 && num_grade <=100) {
        letter_grade = "A";
    }
    

    // tell user the answer
    cout << "The grade of " << num_grade << " is a letter grade of " << letter_grade << endl;



    return 0;
}