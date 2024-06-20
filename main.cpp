#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct DbInfo {
    string PGHOST;
    string PGDATABASE;
    string PGUSER;
    string PGPASSWORD;
};

class Book {
public:
    Book(string title, string author, string isbn)
        : title(title), author(author), isbn(isbn) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return isbn; }

private:
    string title;
    string author;
    string isbn;
    DbInfo mydb;

    int main(){
        mydb.PGHOST = "localhost";
        mydb.PGDATABASE = "database";
        mydb.PGUSER = "user";
        mydb.PGPASSWORD = "password";
    }
};
