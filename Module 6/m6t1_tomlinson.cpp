// CSC 134
// m6t1
// Wendy "Lee" Tomlinson
// 7 april 2025


#include <iostream>
using namespace std;


//  count the cars that pass a construction site every day of the week
int main() {

    // first version, no array
    const int DAYS = 5;
    int cars_today;
    int cars_total = 0;
    double cars_average;

    // add array
    int cars [DAYS];

    cout << "Enter cars that pass for each day." << endl;
    for (int i=0; i<DAYS; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> cars_today;
        cars[i] = cars_today;   // save todays value in the array
        cars_total += cars_today;
    }
    cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
    cars_average = (double) cars_total / DAYS;  // dont wanna round off too early
    cout << "The average cars that pass per day = " << cars_average << endl;

    // now print array
    for (int i=0; i<DAYS; i++) {
        cout << "Day: " << i+1 << " Count: " << cars[i] << endl;
    }

    return 0;
}

