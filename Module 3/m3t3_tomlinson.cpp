// CSC 134
// M3T3
// wendy tomlinson
//feb 17 2025
// start with dice rolls
// what dice are you using today?
// 1d4 + 1df

#include <iostream>
// for random
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    
    const int SIDES = 4;
    int seed = time(0);
    // seed the random number generator
    srand(seed);
    // rand() is a large number so we take the remainder which is %
    int roll;
    roll = ((rand() % SIDES) + 1) ;
    cout << roll << endl;

    roll = ((rand() % SIDES) + 1) ;
    cout << roll << endl;

    roll = ((rand() % SIDES) + 1) ;
    cout << roll << endl;

    

    return 0;
}