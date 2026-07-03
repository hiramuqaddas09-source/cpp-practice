#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    // Default constructor
    Student() {
        name = "Unknown";
    }

    // Parameterized constructor
    Student(string n) {
        name = n;
    }

    // Method to display name
    void DisplayName() {
        cout << "Student Name: " << name << endl;
    }
};

int main() {
    // Using parameterized constructor
    Student s1("Ahsan");  // <-- Replace "Ahsan" with your actual name

    // Using default constructor
    Student s2;

    // Output
    s1.DisplayName();  // Shows your name
    s2.DisplayName();  // Shows "Unknown"

    return 0;
}
