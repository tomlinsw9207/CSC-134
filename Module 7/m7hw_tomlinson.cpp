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
        Book(string t, string a, string g, bool r) {
            title = t;
            authorLastName = a;
            genre = g;
            isRead = r;
        }
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

// Load books from library.txt file
void loadBooks(vector<Book>& books, const string& library) {
    ifstream file(library);
    string line;
    while (getline(file, line)) {
        books.push_back(Book::fromFileString(line));
    }
    file.close();
}

// add new book
void addBook(vector<Book>& books) {
    bool isRead;

    cout << "Enter book title: ";
    string title;
    getline(cin, title);

    cout << "Enter author last name: ";
    string author;
    getline(cin, author);

    cout << "Enter genre: ";
    string genre;
    getline(cin, genre);
    
    cout << "Mark this read? (1 for read, 0 for unread): ";
    cin >> isRead;

    books.emplace_back(title, author, genre, isRead);
}

// Edit existing book
void editBook(vector<Book>& books) {
    string searchTitle;
    cout << "Enter title of the book you want to edit: ";
    getline(cin, searchTitle);

    for (auto& book : books) {
        if (book.getTitle() == searchTitle) {
            cout << "Editing book: " << book.getTitle() << endl;
            cout << "Edit author's last name (press Enter to keep current): ";
            string newAuthor;
            getline(cin, newAuthor);
            if (!newAuthor.empty()) book.setAuthorLastName(newAuthor);

            cout << "Edit genre (press Enter to keep current): ";
            string newGenre;
            getline(cin, newGenre);
            if (!newGenre.empty()) book.setGenre(newGenre);

            cout << "Mark this read? (1 for read, 0 for unread): ";
            int readChoice;
            cin >> readChoice;
            book.setReadStatus(readChoice == 1);

            cout << "Book updated!" << endl;
            return;
        }
    }
    cout << "Book not found" << endl;
}

void displaySortedByAuthor(vector<Book>& books) {
    cout << "Book Collection:" << endl;
    for (const auto& book : books) {
        sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
            return a.getAuthorLastName() < b.getAuthorLastName();
        });
        book.displayBook();
    }
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
        cout << "Enter selection: ";
        cin >> choice;
        cout << endl;

        if (choice == 1) {
            // adds new book
            addBook(books);
        }
        else if (choice == 2) {
            // edits existing book
            editBook(books);
        }
        else if (choice == 3) {
            // displays all books (alphabetically)
            displaySortedByAuthor(books);
        }
        else if (choice == 4) {
            // displays all books that are read or unread
        }
        else if (choice == 5) {
            // saves data and exit program
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