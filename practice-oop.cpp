#include <iostream>
using namespace std;

class Cloth {
private:
    string name;
    string color;
    int age;

public:
    // Setters
    void setName(string n) {
        name = n;
    }

    void setColor(string c) {
        color = c;
    }

    void setAge(int a) {
        age = a;
    }

    // Getters
    string getName() {
        return name;
    }

    string getColor() {
        return color;
    }

    int getAge() {
        return age;
    }

    // Function to check if old-fashioned
    void IsOldFashion() {
        if (age > 5) {
            cout << "This cloth \"" << name << "\" is old-fashioned." << endl;
        } else {
            cout << "This cloth \"" << name << "\" is still in fashion." << endl;
        }
    }
};

int main() {
    Cloth c;

    // Taking input from user
    
//
//    cout << "Enter cloth name: ";
//    getline(cin, name);
//
//    cout << "Enter cloth color: ";
//    getline(cin, color);
//
//    cout << "Enter cloth age: ";
//    cin >> age;

    // Set values using setters
    c.setName("shirt");
    c.setColor("pink");
    c.setAge(5);

    // Check if the cloth is old-fashioned
    c.IsOldFashion();

    return 0;
}

