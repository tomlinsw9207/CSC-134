// csc 134
// m5 t2
// Wendy "Lee" Tomlinson
// march 26 2025

#include <iostream>
using namespace std;

// declare functions
int square(int num);
void printanswerline(int num1, int num2);

int main() {
    //cout << "Wake up" << endl;
    int num = 0;
    while (num < 10) {
        num++;
        int answer = square(num);
        printanswerline(num, answer); 
        // the variables in these parentheses are defined in main and then thrown into the void function to use.
        // void function has its "own" variables because they're place holders for the stuff that gets thrown in from main
    }
    

    
return 0;
}

int square(int num) {
    int answer = num * num;
    return answer;
}

void printanswerline(int num1, int num2) {
    cout << "The square of " << num1 << " is " << num2 << endl;

}