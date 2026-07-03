#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int speed;

public:
    void setModel(string m) { model = m; }
    void setSpeed(int s) {
        if (s > 0)
            speed = s;
        else
            cout << "Invalid speed!" << endl;
    }

    string getModel() { return model; }
    int getSpeed() { return speed; }
};

int main() {
    Car c;
    c.setModel("Toyota");
    c.setSpeed(120);

    cout << "Model: " << c.getModel() << endl;
    cout << "Speed: " << c.getSpeed() << " km/h" << endl;
    return 0;
}

