#include <iostream>
using namespace std;

class Student 
{
private:
    string name;

public:
    
    Student() 
    {
        name = "Unknown";
    }
     Student(string n) {
        name = n;
    }
    void displayName() {
        cout << "Your name is: " << name << endl;
    }
};

int main() {
    string input;

    cout << "Enter your name: ";
    getline(cin, input);

    Student s;

    if (input == "") {
        s = Student(); 
    } else {
        s = Student(input); 
    }

    s.displayName();

    return 0;
}
