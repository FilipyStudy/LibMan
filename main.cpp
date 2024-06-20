#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Book {
public:
    Book(std::string title, std::string author, std::string isbn)
        : title(title), author(author), isbn(isbn) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    std::string getISBN() const { return isbn; }

private:
    std::string title;
    std::string author;
    std::string isbn;
};