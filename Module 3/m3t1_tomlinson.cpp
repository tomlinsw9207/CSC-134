// CSC 134
// M3T1 and M3T2
// Wendy "Lee" Tomlinson
// February 17 2025
// ask the user for the width and length of two rectangles
// find he area


#include <iostream>
using namespace std;

int main() {
   
    //variables
    double len1, wid1, len2, wid2;
    double area1, area2;

    // ask kthe user for the length and width
    cout << "What's the length of the first rectangle (in inches)? ";
    cin >> len1;
    cout << "What's the width of the first rectangle (in inches)? ";
    cin >> wid1;
    cout << "What's the length of the second rectangle (in inches)? ";
    cin >> len2;
    cout << "What's the width of the second rectangle (in inches)? ";
    cin >> wid2;
    cout << endl;

    // find the area
    area1 = len1 * wid1;
    area2 = len2 * wid2;

    // print the area
    cout << "The area of the first rectangle is " << area1 << " square inches." << endl;
    cout << "The area of the second rectangle is " << area2 << " square inches." << endl;
    cout << endl;

    // which is larger?
    if (area1 > area2) {
        cout << "The first one is larger." << endl;
    }
    else if (area2 > area1) {
        cout << "The second one is larger." << endl;
    }
    else if (area2 = area1) {
        cout << "The rectangles are the same size." << endl;
    }

    return 0;
}