// CSC 134
// M7 Hw - MINI PROJECT
// Wendy "Lee" Tomlinson
// 12 May 2025

// at home library catalogue

// TODO: Seperate objects and its functions from main()
// organize main(), .txt file for saving data, and seperate file for objects

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

class Book {
    private:
        string title;
        string authorLastName;
        string genre;
        bool isRead;
    
    public: 
        // constructor
        Book(string t, string a, string g, bool r) : title(t), authorLastName(a), genre(g), isRead(r) {}
        // getters
        string getTitle() const {
            return title;
        }
        string getAuthorLastName() const {
            return authorLastName;
        }
        string getGenre() const {
            return genre;
        }
        bool getReadStatus() const {
            return isRead;
        }
        // setters
        void setTitle(const string& newTitle) {
            title = newTitle;
        }
        void setAuthorLastName(const string& newAuthor) {
            authorLastName = newAuthor;
        }
        void setGenre(const string& newGenre) {
            genre = newGenre;
        }
        void setReadStatus(bool status) {
            isRead = status;
        }
        
        // string to file conversion [WIP]
        string toFileString() const {
            return title + " | " + authorLastName + " | " + genre + " | " + (isRead ? "1" : "0");
        }
        // file string to object conversion
        static Book fromFileString(const string& line) {
            string title, author, genre;
            bool isRead;
            stringstream ss(line);
            getline(ss, title, '|');
            getline(ss, author, '|');
            getline(ss, genre, '|');
            int readInt;
            ss >> readInt;
            isRead = (readInt==1);
            return Book(title, author, genre, isRead);
        }
        // display book details
        void displayBook() const {
            cout << "Title: " << title << ", Author: " << authorLastName << ", Genre: " << genre 
            << ", Read: " << (isRead ? "Yes" : "No" ) << endl;
        }
};

// save new books to file
void saveBooks(const vector<Book>& books, const string& library) {
    ofstream file(library);
    for (const auto& book : books) {
        file << book.toFileString() << endl;
    }
    file.close();
}

// Load books from a .txt file
void loadBooks(vector<Book>& books, const string& library) {
    ifstream file(library);
    string line;
    while (getline(file, line)) {
        books.push_back(Book::fromFileString(line));
    }
    file.close();
}


int main() {

    vector<Book> books;
    string library = "library.txt";
    loadBooks(books, library);

    // MENU BEGINS HERE
    int choice;
    bool keepgoing = true;

    while (keepgoing == true) {

        cout << "LEE'S LIBRARY" << endl;
        cout << endl;
        cout << "1. Add new book" << endl;
        cout << "2. Edit existing book" << endl;
        cout << "3. Display all books" << endl;
        cout << "4. Display all books by read status" << endl;
        cout << "5. Save & exit" << endl;
        cout << "Selection: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            // add new book
        }
        else if (choice == 2) {
            // edit existing book
        }
        else if (choice == 3) {
            // display all books (alphabetically)
        }
        else if (choice == 4) {
            // display all books that are read or unread
        }
        else if (choice == 5) {
            // save data and exit program
            saveBooks(books, library);
            cout << "Books are saved! See ya!" << endl;
            keepgoing = false;
        }
        else {
            cout << "That ain't a valid option! Try again pookie <3" << endl;
        }
    }
    
return 0;
}