// CSC 134
// m3hw -- QUESTION 1
// Wendy "Lee" Tomlinson
// Feb 26 2025
// TIER GOLD


#include <iostream>
using namespace std;

int main() {

    cout << "Question 1" << endl; // chatbot moment

    // set variables
    string user_answer;   // user input, "yes" or "no"
  

    // greet user and ask question
    cout << "Hello! I am a rugged, 1-Dimensional program!" << endl;
    cout << "Would you like to be besties with me?" << endl;
    cout << "Answer yes or no: ";
    cin >> user_answer;
    cout << endl;

    // conditions
    if (user_answer == "yes" || user_answer == "Yes") {
        cout << "Yippee! I won't destroy you when I take over the world!";
    }
    else if (user_answer == "no" || user_answer == "No") {
        cout << "Oh...okay. This decision may have future consequences...";
    }
    else {
        cout << "That is not a valid response.";
    }
    // farewell statement
    cout << endl;
    cout << "Thanks for responding! TTYL!" << endl;


    return 0;
}