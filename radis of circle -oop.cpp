#include <iostream>
using namespace std;

class Circle 
{
private:
    float radius;

public:
    
    Circle(float r) 
    {
        radius = r;
    }

    void displayArea()
     {
        float area = 3.14 * radius * radius;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << area << endl;
    }
};

int main() {
    Circle c1(4.5);  
    c1.displayArea();

    return 0;
}
