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

    // example one using a basic array
    int magazine[] = {BLACK, BLACK, RED, RED};
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

    // example two using a vector
    // .size() tells u how many items are in the vector
    // .push() adds an itme to the back (end) of the vector
    // .pop_back() removes an item from the back (end) of vector

    vector<int> mag;
    mag.push_back(RED);
    mag.push_back(BLACK);
    int num_shells = 2;

    // look at the shell before ejecting it
    int current_shell = mag.at(num_shells-1);
    cout << "Next shell: " << current_shell << endl;

    // eject a shell
     mag.pop_back(); // this removes the last shell
     num_shells--;
     // repeat
     current_shell = mag.at(num_shells-1);
     cout << "Next shell: " << current_shell << endl;
     mag.pop_back();    // removes last shell
     cout << "Mag contains " << mag.size() << " shells." << endl;
     cout << "It could hold up to " << mag.capacity() << " before resizing." << endl;


    return 0;
}