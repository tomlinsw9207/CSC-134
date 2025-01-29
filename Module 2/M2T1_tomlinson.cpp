// CSC 134
// M2T1
// Wendy "Lee" Tomlinson
// January 29 2025

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   string name = "Lee Tomlinson"; // whatever name works
    int bananas = 100;// number of banana owned -- 100
    double pricePerBanana = 0.25; // price per banana -- 0.25
    double totalPrice = (double) bananas * pricePerBanana; // calculates total cost of all bananas

    //TODO M2T1
    //ask for user input: 
    //name 
    //how many bananas they want
    //charge them only for the bananas want
    string user_name; // who is buying the bananas
    int bananaswanted; // how many bananas they want

    //greet customer
    cout << "Howdy! What's your name? ";
    cin >> user_name;
    cout << "Nice to meet you, " << user_name << endl;
    
    // this line sets cout for doubles to 2 decimal places
    //have to put the line #include <iomanip> with other #include statements at the top for this to work
    cout << setprecision(2) << fixed;
    // calculate total price of what customer wants
    double totalUser_Cost = (double) bananaswanted * pricePerBanana;

    cout << "Welcome to " << name;
    cout << "'s banana orchard!" << endl;
    cout << "We have " << bananas;
    cout << " bananas in stock." << endl;
    cout << "Bananas are currently $";
    cout << pricePerBanana << " each." << endl;
    cout << "If you want all them banaynays, that will cost you a whopping $" << totalPrice << endl;
    cout << "If you want three of them banaynays, that will be $" << pricePerBanana * 3 << endl;
    cout << "If you want apples instead, then this here orchard ain't for you friend." << endl;
    
    //take customers order 
    cout << "How many bananas would you like?" << endl;
    cin >> bananaswanted;
    cout << "Great! That will cost you $" << totalUser_Cost;







}