#include <iostream>
using namespace std;

class Person {
private:
    string F_name;
    string L_name;

public:
    void setFirstName(string f) {
        F_name = f;
    }

    void setLastName(string l) {
        L_name = l;
    }

    string getFirstName() {
        return F_name;
    }

    string getLastName() {
        return L_name;
    }
};

class Employee {
public:
    void calculateSalary()
     {
        cout << "Calculate the salary" << endl;
    }
};

class SubPerson : public Person,public Employee {
};

int main() {
    SubPerson s;
    s.setFirstName("AROOJ");
    s.setLastName("Fatima");

    cout << "First Name: " << s.getFirstName() << endl;
    cout << "Last Name: " << s.getLastName() << endl;
     s.calculateSalary()
    return 0;
}

