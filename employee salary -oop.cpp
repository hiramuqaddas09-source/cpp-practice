#include <iostream>
using namespace std;

class Employee {
private:
    int employee_id;
    string employee_name;
    double employee_salary;

public:
    // Setters
    void setId(int id) {
        employee_id = id;
    }

    void setName(string name) {
        employee_name = name;
    }

    void setSalary(double salary) {
        if (salary > 0 && salary <= 15000000) {
            employee_salary = salary;
        } else {
            cout << "Error: Salary must be positive and not more than 15,000,000." << endl;
        }
    }

    // Getters
    int getId() {
        return employee_id;
    }

    string getName() {
        return employee_name;
    }

    double getSalary() {
        return employee_salary;
    }
};

int main() {
    Employee emp;

    emp.setId(101);
    emp.setName("Ali");
    emp.setSalary(20000000);  // Invalid salary
    emp.setSalary(1200000);   // Valid salary

    // Output
    cout << "\nEmployee Details:" << endl;
    cout << "ID: " << emp.getId() << endl;
    cout << "Name: " << emp.getName() << endl;
    cout << "Salary: " << emp.getSalary() << endl;

    return 0;
}
