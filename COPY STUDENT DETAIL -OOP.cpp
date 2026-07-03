#include <iostream>
using namespace std;

class Student 
{
private:
    string name;
    int rollNo;
    int semester;
    string session;
    float cgpa;

public:
    
    Student(string n, int r, int sem, string sess, float c) 
    {
        name = n;
        rollNo = r;
        semester = sem;
        session = sess;
        cgpa = c;
    }
     Student(string n, int r, const Student &S, float c) 
     {
        name = n;
        rollNo = r;
        cgpa = c;
        semester = S.semester;
        session = S.session;
    }

    void displayInfo() 
    {
        cout << "Name = " << name << endl;
        cout << "Roll No = " << rollNo << endl;
        cout << "Semester = " << semester << endl;
        cout << "Session = " << session << endl;
        cout << "CGPA = " << cgpa << endl;
    }
};

int main()
 { 
    Student S1("Ali", 1, 2, "2024-2028", 3.1);
    S1.displayInfo();
    
    Student S2("Amna", 2, S1, 3.1);
    S2.displayInfo();
    
}

