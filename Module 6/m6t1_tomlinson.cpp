// CSC 134
// m6t1
// Wendy "Lee" Tomlinson
// 7 april 2025


#include <iostream>
using namespace std;

void part1();
void part2();

//  count the cars that pass a construction site every day of the week
int main() {

    // first version, no array
    const int DAYS = 5;
    int cars_today;
    int cars_total = 0;
    double cars_average;

    cout << "Enter cars that pass for each day." << endl;
    for (int i=0; i<DAYS; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> cars_today;
        cars_total += cars_today;
        cars_average = cars_total / DAYS;
    }
    cout << "Over " << DAYS << " days, total cars = " << cars_total << endl;
    cout << "The average cars that pass per day = " << cars_average << endl;

    return 0;
}

void part1() {
    // for each day monday through friday

    // count the cars that pass the site

    // add them to the total

    // find the total

    // find the average for each day

}

void part2() {
    // For each day Monday thrugh Friday

    // count the cars that pass the site

    // add them to that day's ARRAY value

    // Find the total

    // Find the average per day

    // Print out or graph the full week's data.
  
}