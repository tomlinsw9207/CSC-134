// CSC 134
// M3LAB1 -- choices
// Wendy "Lee" Tomlinson
// February 24 2025



#include <iostream>
using namespace std;

void chooseLeft(); // choice 1
void chooseRight(); // choice 2
void chooseStraight(); // choice 3

int main() {

    int choice;
// ask user the question
    cout << "There is a pathway into a garden in front of you. Which direction do you choose?" << endl;
    cout << "1. Left" << endl;
    cout << "2. Right" << endl;
    cout << "3. Straight" << endl;
    cout << "Type 1, 2, or 3: ";
    cin >> choice;
    cout << endl;

    if (1 == choice) {
        chooseLeft();
    }
    else if (2 == choice) {
        chooseRight();
    }
    else if (3 == choice) {
        chooseStraight();
    }
    else {
        cout << "Sorry, that isn't an option." << endl;
    }

    cout << endl;
    cout << "Thanks for playing!" << endl;
return 0;
}

// add left response
void chooseLeft() {
    cout << "You chose to go left!" << endl;
    cout << "You walk down a shaded pathway that smells like fresh air," << endl;
    cout << "until you wander into a welcoming grove of trees." << endl;
    cout << "You get to live another day." << endl;
}
// and right response
void chooseRight() {
    cout << "You chose to go right!" << endl;
    cout << "The path becomes fainter and the sky seems to be getting darker." << endl;
    cout << "The forest smells of rot, but you continue on." << endl;
    cout << "Eventually you stumble over something," << endl;
    cout << "and when you look down, you find a broken headstone under your foot." << endl;
    cout << "You are in an abandoned cemetary, and suddenly you realize you aren't alone..." << endl;
    cout << "Deep in your bones, you know you are going to die here." << endl;
}
// add straight response
void chooseStraight() {
    cout << "You chose to go straight!" << endl;
    cout << "The path vanishes quickly, and you're now traipsing through thick brambles." << endl;
    cout << "There are strange noises in the forest around you, and the temperature is rapidly dropping." << endl;
    cout << "You realize you are lost, and you don't recognize any of your surroundings." << endl;
    cout << "You aren't sure how the situation will get worse," << endl;
    cout << "but you know you don't want to be lost past dusk..." << endl;
}