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
        // default empty constructor
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
    
  };
  
  int main() {
      cout << "M7T1 - Restaurant Reviews" << endl;


      // create  sample restaurants
      Restaurant rest1 = Restaurant ("Mi Casita", 3.5);
      Restaurant rest2 = Restaurant ();
      cout << "Enter restaurant name: ";
      string name;
      cin >> name;
      rest2.setName(name);
      cout << "Enter restaurant rating: ";
      double rating;
      cin >> rating;
      rest2.setRating(rating);


  
      return 0;
  
  }