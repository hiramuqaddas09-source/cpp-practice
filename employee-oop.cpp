#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int id;

public:
    
    Employee() {
        name = "Unknown";
        id = 0;
    }

    Employee(string n, int i) {
        name = n;
        id = i;
    }

    
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }
};

int main() 
{               
    Employee e1("Alice", 101);
    cout<<"employee 1="<<endl;  
    e1.display();
    Employee e2=e1; 
     cout<<"employee 2="<<endl;   
    e2.display();

    return 0;
}
