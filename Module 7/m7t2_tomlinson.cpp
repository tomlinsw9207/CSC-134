// CSC 134
// m7 t2 - gaddis rectangle program
// Wendy "Lee" Tomlinson
// 30 april 2025

#include <iostream>
#include "rectangle.h" // use "" not <> when its ur own file
using namespace std;


int main() {

    double len, wid, area;

    cout << "Rectangle calculator" << endl;
    cout << "Rectangle 1" << endl;
    cout << "Enter width: ";
    cin >> wid;
    cout << "Enter length: ";
    cin >> len;

    if (len > 0 && wid > 0) {
        Rectangle r1 = Rectangle();
        r1.setWidth(wid);
        r1.setLength(len);
        cout << "The area is: " << r1.getArea() << endl;
    }
    else {
        cout << "Positive numbers only. Try again" << endl;
        cout << endl;
        return main();
    }
    return 0;
}