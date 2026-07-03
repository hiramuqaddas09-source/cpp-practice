#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string subject;
    int experience;

public:
    void setName(string n) { name = n; }
    void setSubject(string s) { subject = s; }
    void setExperience(int e) {
        if (e >= 0)
            experience = e;
        else
            cout << "Experience can't be negative!" << endl;
    }

    string getName() { return name; }
    string getSubject() { return subject; }
    int getExperience() { return experience; }
};

int main() {
    Teacher t;
    t.setName("Miss Sara");
    t.setSubject("Mathematics");
    t.setExperience(7);

    cout << "Name: " << t.getName() << endl;
    cout << "Subject: " << t.getSubject() << endl;
    cout << "Experience: " << t.getExperience() << " years" << endl;

    return 0;
}

