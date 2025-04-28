// CSC 134
// m7t1
// Wendy "Lee" Tomlinson
// 28 april 2025

#include <iostream>
using namespace std;

// Next time we'll put the class in a separate file
class Restaurant {
    private:
      string name;    // the name
      double rating;  // 0 to 5 stars
  
    public:
      // constructor 
      Restaurant(string n, double r) {
          name = n;
          rating = r;
      }
      Restaurant() {
        // default empty constructor to add stuff as i please lol
      }
      // getters and setters
      void setName(string n) {
          name = n; 
      }
      void setRating(double r) {
          rating = r;
      }
      string getName() const {
          return name;
      }
      double getRating() const {
          return rating;
      }
      void showInfo() {
        // prints restaurant info nicely
        cout << "Restaurant name: ";
        cout << this->name << endl;     // "this" is a keyword that means the current object thats pointed by the "this" similar to the ( . )
        cout << "Rating: ";
        // TODO: Print the stars as "*"
        cout << this->rating << endl;

        int fullstar = static_cast<int>(rating); // whole number part
        bool halfstar = (rating - fullstar) >= 0.5; // checks for a half star
        
        for (int i = 0; i < fullstar; i++) {
            cout << "🌕";
        }
        if (halfstar) {
            cout << "🌗";
        }
        cout << endl;
      }
    
  };
  
  int main() {
      cout << "M7T1 - Restaurant Reviews" << endl;

      // create  sample restaurants
      Restaurant rest1 = Restaurant ("Mi Casita", 3.5);
      Restaurant rest2 = Restaurant ();
      cout << "Enter restaurant name: ";
      string name;
      // this trick lets us get names with spaces in them
      // cin.ignore(); // skip extra new line but this is only needed on windows
      getline(cin, name); // reads entire line
      rest2.setName(name);
      cout << "Enter restaurant rating: ";
      double rating;
      cin >> rating;
      rest2.setRating(rating);

      // print out restaurant info
      rest1.showInfo();
      rest2.showInfo();

  
      return 0;
  
  }