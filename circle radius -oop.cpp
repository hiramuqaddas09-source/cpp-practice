#include <iostream>
using namespace std;

class Circle {
private:
    double radius;
    string color;

public:
    // Default constructor
    Circle() {
        radius = 1.0;
        color = "red";
    }

    // Constructor with radius only
    Circle(double r) {
        radius = r;
        color = "red";
    }

    // Get the radius
    double getRadius() {
        return radius;
    }

    // Calculate and return the area
    double getArea() {
        return 3.1416 * radius * radius;
    }
};

int main() {
    // Use roll number as radius, example: 23
    Circle c(23);

    cout << "Radius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;

    return 0;
}
