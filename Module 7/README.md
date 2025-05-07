# CSC 134
MODULE 7 MINI PROJECT NOTES

Aspects wanted in the program:

- catalogue books with the option to add more
- have program alphabetically organize them for me

- categorize books 
- by author name
- by genre
- as read or unread
- by lexile?
- by wordcount?

MUST HAVE:
- ability to add new books
- ability to mark books as read
- sort and display books by alphabetical author last name
- include genre

copilot help 4/30
PROMPT:
I want to create a program to catalogue and categorize my personal books, with the option to add more books as I buy more. I want it to alphabetize the books by author name, sort books into categories like their genre and if I have read the book or not. I'm considering also sorting them based on their lexile level and word count, but I don't want to get ahead of myself. Do you think this is doable for my skill level?

RESPONSE:
Core Functionality:

Create a structure (like a struct or a class) to represent a book with attributes such as title, author, genre, read status, and optional fields for lexile level and word count.


POTENTIAL LAYOUT 

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std; // Added this line

// Define the Book structure
struct Book {
    string title;
    string author;
    string genre;
    bool isRead;
};

// Function to display the list of books
void displayBooks(const vector<Book>& books) {
    cout << "\nList of Books:\n";
    for (const auto& book : books) {
        cout << "Title: " << book.title 
             << ", Author: " << book.author 
             << ", Genre: " << book.genre 
             << ", Read: " << (book.isRead ? "Yes" : "No") << "\n";
    }
}

// Function to add a new book
void addBook(vector<Book>& books) {
    Book newBook;
    cout << "Enter title: ";
    getline(cin, newBook.title);
    cout << "Enter author: ";
    getline(cin, newBook.author);
    cout << "Enter genre: ";
    getline(cin, newBook.genre);
    cout << "Have you read this book? (1 for Yes, 0 for No): ";
    cin >> newBook.isRead;
    cin.ignore(); // Clear the input buffer
    books.push_back(newBook);
    cout << "Book added successfully!\n";
}

// Function to sort books by author name
void sortBooksByAuthor(vector<Book>& books) {
    sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.author < b.author;
    });
    cout << "Books sorted by author name.\n";
}

int main() {
    vector<Book> books;
    int choice;

    do {
        cout << "\nBook Catalog Menu:\n";
        cout << "1. Add a Book\n2. Display Books\n3. Sort Books by Author\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the input buffer

        switch (choice) {
        case 1:
            addBook(books);
            break;
        case 2:
            displayBooks(books);
            break;
        case 3:
            sortBooksByAuthor(books);
            break;
        case 4:
            cout << "Exiting program. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}



copilot help

PROMPT: 
How would I edit previously entered data from the main program instead of going through the .txt file?


POTENTIAL LAYOUT THING?

#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <map>

using namespace std;

class Book {
private:
    string title;
    string authorLastName;
    string genre;
    bool isRead;

public:
    // Constructor
    Book(string t, string a, string g, bool r) 
        : title(t), authorLastName(a), genre(g), isRead(r) {}

    // Getters
    string getTitle() const { return title; }
    string getAuthorLastName() const { return authorLastName; }
    string getGenre() const { return genre; }
    bool getReadStatus() const { return isRead; }

    // Setters
    void setTitle(const string& newTitle) { title = newTitle; }
    void setAuthorLastName(const string& newAuthor) { authorLastName = newAuthor; }
    void setGenre(const string& newGenre) { genre = newGenre; }
    void setReadStatus(bool status) { isRead = status; }

    // Convert book to string format for file saving
    string toFileString() const {
        return title + " | " + authorLastName + " | " + genre + " | " + (isRead ? "1" : "0");
    }

    // Create Book object from file string
    static Book fromFileString(const string& line) {
        string title, author, genre;
        bool isRead;
        stringstream ss(line);
        getline(ss, title, '|');
        getline(ss, author, '|');
        getline(ss, genre, '|');
        int readInt;
        ss >> readInt;
        isRead = (readInt == 1);
        return Book(title, author, genre, isRead);
    }

    // Display book details
    void displayBook() const {
        cout << "Title: " << title << ", Author: " << authorLastName
             << ", Genre: " << genre << ", Read: " << (isRead ? "Yes" : "No") << endl;
    }
};

// Save books to a .txt file
void saveBooks(const vector<Book>& books, const string& filename) {
    ofstream file(filename);
    for (const auto& book : books) {
        file << book.toFileString() << endl;
    }
    file.close();
}

// Load books from a .txt file
void loadBooks(vector<Book>& books, const string& filename) {
    ifstream file(filename);
    string line;
    while (getline(file, line)) {
        books.push_back(Book::fromFileString(line));
    }
    file.close();
}

// Add a book
void addBook(vector<Book>& books) {
    string title, author, genre;
    bool isRead;

    cout << "Enter book title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Enter author's last name: ";
    getline(cin, author);
    cout << "Enter genre: ";
    getline(cin, genre);
    cout << "Have you read this book? (1 for Yes, 0 for No): ";
    cin >> isRead;

    books.emplace_back(title, author, genre, isRead);
}

// Edit an existing book
void editBook(vector<Book>& books) {
    string searchTitle;
    cout << "Enter the title of the book you want to edit: ";
    cin.ignore();
    getline(cin, searchTitle);

    for (auto& book : books) {
        if (book.getTitle() == searchTitle) {
            cout << "Editing book: " << book.getTitle() << "\n";
            cout << "Enter new author's last name (or press Enter to keep current): ";
            string newAuthor;
            getline(cin, newAuthor);
            if (!newAuthor.empty()) book.setAuthorLastName(newAuthor);

            cout << "Enter new genre (or press Enter to keep current): ";
            string newGenre;
            getline(cin, newGenre);
            if (!newGenre.empty()) book.setGenre(newGenre);

            cout << "Mark as read? (1 for Yes, 0 for No): ";
            int readChoice;
            cin >> readChoice;
            book.setReadStatus(readChoice == 1);

            cout << "Book updated successfully!\n";
            return;
        }
    }
    cout << "Book not found.\n";
}

// Display books
void displayBooks(const vector<Book>& books) {
    cout << "\nBook Collection:\n";
    for (const auto& book : books) {
        book.displayBook();
    }
}

// Sort books by author's last name
void displaySortedByAuthor(vector<Book>& books) {
    sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.getAuthorLastName() < b.getAuthorLastName();
    });
    displayBooks(books);
}

// Display books by read status
void displayByReadStatus(const vector<Book>& books, bool showRead) {
    cout << (showRead ? "\nBooks You've Read:\n" : "\nBooks You Haven't Read Yet:\n");
    for (const auto& book : books) {
        if (book.getReadStatus() == showRead) {
            book.displayBook();
        }
    }
}

// Display books grouped by genre
void displayByGenre(const vector<Book>& books) {
    map<string, vector<Book>> genreMap;

    // Group books by genre
    for (const auto& book : books) {
        genreMap[book.getGenre()].push_back(book);
    }

    cout << "\nBooks Grouped by Genre:\n";
    for (const auto& [genre, bookList] : genreMap) {
        cout << "\nGenre: " << genre << "\n";
        for (const auto& book : bookList) {
            book.displayBook();
        }
    }
}

int main() {
    vector<Book> books;
    string filename = "book_catalog.txt";

    // Load existing books
    loadBooks(books, filename);

    int choice;
    do {
        cout << "\nBook Catalog Menu:\n";
        cout << "1. Add Book\n";
        cout << "2. Edit Book\n";
        cout << "3. Display All Books\n";
        cout << "4. Display Books Alphabetically by Author\n";
        cout << "5. Display Only Read or Unread Books\n";
        cout << "6. Display Books Grouped by Genre\n";
        cout << "7. Save & Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(books);
                break;
            case 2:
                editBook(books);
                break;
            case 3:
                displayBooks(books);
                break;
            case 4:
                displaySortedByAuthor(books);
                break;
            case 5:
                int readStatus;
                cout << "Show (1) Read or (0) Unread books? ";
                cin >> readStatus;
                displayByReadStatus(books, readStatus == 1);
                break;
            case 6:
                displayByGenre(books);
                break;
            case 7:
                saveBooks(books, filename);
                cout << "Books saved successfully! Goodbye.\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }
    } while (choice != 7);

    return 0;
}


