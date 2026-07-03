#include <iostream>
using namespace std;

class Flower {
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

    // Function to check if the flower is endangered
    void IsEndanger() {
        if (age > 20) {
            cout << "The flower \"" << name << "\" is in danger." << endl;
        } else {
            cout << "The flower \"" << name << "\" is safe." << endl;
        }
    }
};

int main() {
    Flower f;

    // Set flower details
    f.setName("Rose");
    f.setColor("Red");
    f.setAge(25);  // You can change the age to test

    // Show details and danger status
    cout << "Flower Name: " << f.getName() << endl;
    cout << "Flower Color: " << f.getColor() << endl;
    cout << "Flower Age: " << f.getAge() << endl;

    f.IsEndanger();

    return 0;
}
