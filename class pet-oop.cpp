#include <iostream>
using namespace std;

class Pet {
private:
    string type;
    string name;
    int age;

public:
    void setType(string t) { type = t; }
    void setName(string n) { name = n; }
    void setAge(int a) {
        if (a >= 0)
            age = a;
        else
            cout << "Age can't be negative!" << endl;
    }

    string getType() { return type; }
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
    Pet p;
    p.setType("Dog");
    p.setName("Buddy");
    p.setAge(5);

    cout << "Pet Type: " << p.getType() << endl;
    cout << "Pet Name: " << p.getName() << endl;
    cout << "Pet Age: " << p.getAge() << " years" << endl;
}
