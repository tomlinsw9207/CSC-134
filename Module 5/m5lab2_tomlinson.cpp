// CSC 134
// M5LAB2
// Wendy "Lee" Tomlinson
// 2 april 2025

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.
double getLength();
double getWidth();
double getArea(double num1, double num2);
void displayData(double num1, double num2, double num3);

int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
    length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    int length;
    cout << "Enter length: ";
    cin >> length;
    cout << endl;
    return length;
}

double getWidth() {
    int width;
    cout << "Enter width: ";
    cin >> width;
    cout << endl;
    return width;
}

double getArea(double num1, double num2) {
    int area;
    area = num1 * num2;
    return area;
}
void displayData(double num1, double num2, double num3) {
    int length = num1;
    int width = num2;
    int area = num3;
    cout << "The length is " << num1 << endl;
    cout << "The width is " << num2 << endl;
    cout << "The area is " << num3 << endl;

}