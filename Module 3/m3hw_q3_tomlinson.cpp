// CSC 134
// m3hw -- QUESTION 3
// Wendy "Lee" Tomlinson
// Feb 28 2025

// TODO -- set up looping program?

#include <iostream>
using namespace std;

    // path options
    void start1();     // own path
    void start2();     // follow trail
    void option1();     // take water
    void option2();     // ignore water

int main() {

    cout << "QUESTION 3" << endl;

    // variables

    int choice1;     // 1 or 2 for first question
    int choice2;     // 1 or 2 for second question

    // intro statement
    cout << "Choose your own adventure and see what happens!" << endl;
    cout << endl;

    // first user prompt
    cout << "You are hiking in the mountains, what route do you take?" << endl;
    cout << "1. Make your own path" << endl;
    cout << "2. Follow a designated trail" << endl;
    cout << "Type 1 or 2: ";
    cin >> choice1;
    cout << endl;
    // if statements
    if (1 == choice1) {
        start1();
    }
    if (2 == choice1) {
        start2();
        cout << "Do you take some with, or continue on without?" << endl;
        cout << "1. Take some water with you" << endl;
        cout << "2. Continue without it" << endl;
        cout << "Type 1 or 2: ";
        cin >> choice2;

            if (1 == choice2) {
                option1();
            }
            if (2 == choice2) {
                option2();
            }
            /*
            else {
                cout << "That isn't a valid option." << endl; // why is this line popping up? when selecting option1?
            }*/
    }
    else {
        cout << "That isn't a valid option." << endl;
    }

    // say goodbye to user
    cout << endl;
    cout << "Thank you for playing!" << endl;

    return 0;
}

    // output for start1
    void start1() {
        cout << "You chose to make your own path!" << endl;
        cout << "You get lost, and in your confusion you walk off a cliff." << endl;
        cout << "R.I.P" << endl;
    }

    // output for start2
    void start2() {
        cout << "You chose to follow a designated trail!" << endl;
        cout << "You trek up the mountain and come across a freshwater spring!" << endl;
        
    }

    // output for option1
    void option1() {
        cout << endl;
        cout << "You chose to take some water with you!" << endl;
        cout << "The hike is longer than you anticipated," << endl;
        cout << "but fortunately you have enought water with you to stay hydrated!" << endl;
        cout << "You finish your hike, and go home tired but satisfied." << endl;
    }

    // output for option2
    void option2() {
        cout << endl;
        cout << "You chose to leave the water and continue up the trail." << endl;
        cout << "The hike is longer than you anticipated, but you keep going forward." << endl;
        cout << "The path is strenuous and you become increasingly thirsty." << endl;
        cout << "You get confused and wander off the trail as heat exhaustion sets in." << endl;
        cout << "You die from heatstroke and rapid dehydration." << endl;
        cout << "R.I.P" << endl;
    }