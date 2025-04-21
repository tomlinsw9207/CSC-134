// CSC 134
// m6lab1
// Wendy "Lee" Tomlinson
// 21 april 2025

#include <iostream>
#include <vector>
using namespace std;

int main() {

    // idea is to replicate the easiest parts of buckshot roulette
    // variables
    const int RED = 1;
    const int BLACK  = 2;
    const int EMPTY = 0;    // need with an array

    // example one
    int magazine[] = {RED, BLACK, BLACK, RED};
    for (int shell : magazine) {
        string shellname;
        if (shell == BLACK) {
            shellname = "Black";
        }
        if (shell == RED) {
            shellname = "Red";
        }
        cout << "Next shell: " << shellname << endl;
    }

    return 0;
}