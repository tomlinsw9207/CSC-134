// CSC 134
// m7 t2 - gaddis rectangle program
// Wendy "Lee" Tomlinson
// 30 april 2025

#include <iostream>
using namespace std;


class Rectangle {
    private: 
        double width;
        double length;

    public:
        void    setWidth(double w);
        void    setLength(double len);
        // get() should never change anything. const makes sure the data isnt accidentally changed
        double  getWidth() const;
        double  getLength() const;
        double  getArea() const;
};

// implementation of class  functions
void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double len) {
    length = len;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getArea() const {
    double area = width * length;
    return area;
}


int main() {

    double len, wid, area;

    cout << "Rectangle calculator" << endl;
    cout << "Rectangle 1" << endl;
    cout << "Enter width: ";
    cin >> wid;
    cout << "Enter length: ";
    cin >> len;

    Rectangle r1 = Rectangle();
    r1.setWidth(wid);
    r1.setLength(len);

    cout << "The area is: " << r1.getArea() << endl;
    

    return 0;
}