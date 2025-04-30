# CSC 134
MODULE 7 MINI PROJECT NOTES

Aspects wanted in the program:

- catalogue books with the option to add more
- have program alphabetically organize them for me?

- categorize books 
- by author name
- by genre
- as read or unread
- by lexile?
- by wordcount?

copilot help 4/30
PROMPT:
I want to create a program to catalogue and categorize my personal books, with the option to add more books as I buy more. I want it to alphabetize the books by author name, sort books into categories like their genre and if I have read the book or not. I'm considering also sorting them based on their lexile level and word count, but I don't want to get ahead of myself. Do you think this is doable for my skill level?

RESPONSE:
Core Functionality:

Create a structure (like a struct or a class) to represent a book with attributes such as title, author, genre, read status, and optional fields for lexile level and word count.

Allow users to input and store book details in a collection (e.g., a std::vector or std::list).

Sorting:

Implement a function to alphabetize the collection of books by the author’s name using std::sort.

Later, you can extend this to sort by other attributes like genre, lexile level, or word count if you choose to.

Categorization:

Use the genre and read status fields to group or filter the books. For example, you could display a list of all unread mystery books.

Adding New Books:

Write functionality to add books dynamically to the collection without overwriting existing data.

Optional Features:

If you want to include lexile level and word count later, you can always revisit and expand your program.

OPTION 1

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



OPTION 2


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std; // Simplifies syntax

// Define the Book class
class Book {
private:
    string title;
    string author;
    string genre;
    bool isRead;

public:
    // Constructor
    Book(string t, string a, string g, bool r) : title(t), author(a), genre(g), isRead(r) {}

    // Getter functions
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getGenre() const { return genre; }
    bool getIsRead() const { return isRead; }

    // Display book details
    void displayBook() const {
        cout << "Title: " << title
             << ", Author: " << author
             << ", Genre: " << genre
             << ", Read: " << (isRead ? "Yes" : "No") << "\n";
    }
};

// Function to display the list of books
void displayBooks(const vector<Book>& books) {
    cout << "\nList of Books:\n";
    for (const auto& book : books) {
        book.displayBook();
    }
}

// Function to add a new book
void addBook(vector<Book>& books) {
    string title, author, genre;
    bool isRead;

    cout << "Enter title: ";
    cin.ignore(); // Clear the input buffer
    getline(cin, title);
    cout << "Enter author: ";
    getline(cin, author);
    cout << "Enter genre: ";
    getline(cin, genre);
    cout << "Have you read this book? (1 for Yes, 0 for No): ";
    cin >> isRead;

    books.emplace_back(title, author, genre, isRead); // Use constructor to create a Book object
    cout << "Book added successfully!\n";
}

// Function to sort books by author name
void sortBooksByAuthor(vector<Book>& books) {
    sort(books.begin(), books.end(), [](const Book& a, const Book& b) {
        return a.getAuthor() < b.getAuthor();
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
