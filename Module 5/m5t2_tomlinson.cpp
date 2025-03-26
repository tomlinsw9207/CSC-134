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