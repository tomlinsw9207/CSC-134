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
void wait_to_pass();
void go_around_it();
//choice 3
void set_up_camp();
void build_a_fire();
void explore_area();


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
    follow_the_trail();
  } else if (3 == choice) {
    set_up_camp();
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
    cout << "Try to turn back." << endl;
    cout << "You wander around, unable to find your way until you die of dehyrdation" << endl;
    return;
}
void wait_for_rescue() {
    cout << "Wait for rescue." << endl;
    cout << "Search and rescue finds you in two days. You return home safe." << endl;
    return;
}

// start 2
void follow_the_trail() { 
    cout << "Follow the trail." << endl;
    cout << "There is a moose on the trail ahead!" << endl;
    cout << "Do you:" << endl;
    cout << "1. Wait for it to pass" << endl;
    cout << "2. Try to go around it" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        wait_to_pass();
      } else if (2 == choice) {
        go_around_it();
      }

}

void wait_to_pass() { 
    cout << "Wait for it to pass" << endl;
    cout << "The moose passes and you finish your hike in peace." << endl;
    return;
}
void go_around_it() {
    cout << "Try to go around it" << endl;
    cout << "The moose tramples you because you were too close." << endl;
    cout << "R.I.P" << endl;
    return;
}

// start 3
void set_up_camp() { 
    cout << "Set up camp" << endl;
    cout << "You have some time before nightfall!" << endl; 
    cout << "Do you:" << endl;
    cout << "1. Build a fire" << endl;
    cout << "2. Explore the area" << endl;
    int choice;
    cout << "Choose: ";
    cin >> choice;
    if (1 == choice) {
        build_a_fire();
      } else if (2 == choice) {
        explore_area();
      }
}

void build_a_fire() {
    cout << "Build a fire" << endl;
    cout << "You make a nice fire and have a pleasant evening before turning in for the night!" << endl;
    return;
}
void explore_area() {
    cout << "Explore the area" << endl;
    cout << "You leave your stuff at the camp and wander for a few hours." << endl;
    cout << "When you returnn to your campsite you find everything trashed by rabbid squirrels!" << endl;
    cout << "All your food is gone and you have to end your trip early." << endl;
    return;
}
