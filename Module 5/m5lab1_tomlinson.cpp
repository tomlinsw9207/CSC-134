// CSC 134
// m5 lab 1
// Wendy "Lee" Tomlinson
// 31 march 2025


#include <iostream>
using namespace std;


void main_menu();
// choice 1
void make_own_path();
void turn_back();
void wait_for_rescue();

// choice 2
void follow_the_trail();

//choice 3
void set_up_camp();
// TODO: add more choices here

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You are hiking in the mountains, what choice do you make?" << endl;
  cout << "Do you:" << endl;
  cout << "1. Make your own path" << endl;
  cout << "2. Follow the trail" << endl;
  cout << "3. Set up camp " << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    make_own_path();
  } else if (2 == choice) {
    // call choice 2 here
  } else if (3 == choice) {
    // call choice 3 here
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().

// start 1
void make_own_path() {
  cout << "Make your own path." << endl;
  cout << "You get lost." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try to turn back" << endl;
  cout << "2. Wait for rescue" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    turn_back();
  } else if (2 == choice) {
    wait_for_rescue();
  }
}

void turn_back() {
    cout << "You wander around, unable to find your way until you die of dehyrdation" << endl;
    return;
}

void wait_for_rescue() {
    cout << "Search and rescue finds you in two days. You return home safe." << endl;
    return;
}

// start 2
void follow_the_trail() { cout << "TODO: Write something here" << endl; }

void set_up_camp() { cout << "TODO: Write something here" << endl; }

// any new choices go here