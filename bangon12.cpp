#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string bookID;
    string bookName;
    string author;
    bool isAvailable;

public:
    Book(string id, string name, string author, bool available) {
        bookID = id;
        bookName = name;
        this->author = author;
        isAvailable = available;
    }

    void setBookID(string id) {
        bookID = id;
    }

    void setBookName(string name) {
        bookName = name;
    }

    void setAuthor(string authorName) {
        author = authorName;
    }

    void setIsAvailable(bool available) {
        isAvailable = available;
    }

    string getBookID() {
        return bookID;
    }

    string getBookName() {
        return bookName;
    }

    string getAuthor() {
        return author;
    }

    bool getIsAvailable() {
        return isAvailable;
    }

    void printInfo() {
        cout << "Book ID: " << bookID << endl;
        cout << "Book Name: " << bookName << endl;
        cout << "Author: " << author << endl;
        cout << "Status: ";
        if (isAvailable)
            cout << "Available" << endl;
        else
            cout << "Borrowed" << endl;
    }
};

int main() {
    Book book1("001", "The Great Gatsby", "F. Scott Fitzgerald", true);
    book1.printInfo();

    return 0;
}
