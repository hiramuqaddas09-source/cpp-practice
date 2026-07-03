#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;

public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }

    int getNum1() { return num1; }
    int getNum2() { return num2; }

    int getSum() {
        return num1 + num2;
    }
};

int main() {
    Calculator calc;
    calc.setNumbers(10, 20);

    cout << "Number 1: " << calc.getNum1() << endl;
    cout << "Number 2: " << calc.getNum2() << endl;
    cout << "Sum: " << calc.getSum() << endl;

    return 0;
}
