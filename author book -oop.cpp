#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    void setTitle(string t) { title = t; }
    void setAuthor(string a) { author = a; }
    void setPrice(float p) { price = p; }

    string getTitle() { return title; }
    string getAuthor() { return author; }
    float getPrice() { return price; }
};

int main() {
    Book b;
    b.setTitle("OOP Basics");
    b.setAuthor("John Doe");
    b.setPrice(299.99);

    cout << "Title: " << b.getTitle() << endl;
    cout << "Author: " << b.getAuthor() << endl;
    cout << "Price: $" << b.getPrice() << endl;
    return 0;
}
