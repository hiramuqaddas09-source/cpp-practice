#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    void setLength(float l) { length = l; }
    void setWidth(float w) { width = w; }

    float getLength() { return length; }
    float getWidth() { return width; }

    float getArea() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    r.setLength(5.5);
    r.setWidth(3.2);

    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;
    cout << "Area: " << r.getArea() << endl;

    return 0;
}
