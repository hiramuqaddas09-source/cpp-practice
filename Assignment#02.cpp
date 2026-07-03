#include <iostream>
#include <string>
#include <cctype> // for toupper

using namespace std;

constexpr int BINARY = 2;
constexpr int OCTAL = 8;
constexpr int DECIMAL = 10;
constexpr int HEXA_DECIMAL = 16;

class NumberSystem {
    int decimalValue {};   // store number internally as decimal
    int base {DECIMAL};    // base of the number given

public:
    // Constructor: takes number (string) and its base, converts to decimal
    NumberSystem(const string& num, int b) : base(b) {
        int sum = 0;
        int power = num.size() - 1;
        for (char c : num) {
            int digit = 0;

            if (c >= '0' && c <= '9')
                digit = c - '0';
            else if (toupper(c) >= 'A' && toupper(c) <= 'F')
                digit = toupper(c) - 'A' + 10;
            else
                throw std::invalid_argument("Invalid digit in number!");

            // integer power calculation
            int factor = 1;
            for (int i = 0; i < power; i++) factor *= base;

            sum += digit * factor;
            power--;
        }
        decimalValue = sum;
    }

    // Constructor: directly from decimal value
    NumberSystem(int decValue) : decimalValue(decValue), base(DECIMAL) {}

    // Convert decimalValue to another base
    string convertTo(int targetBase) const {
        if (decimalValue == 0) return "0";

        int temp = decimalValue;
        string result = "";
        while (temp > 0) {
            int remainder = temp % targetBase;
            if (remainder < 10)
                result = char(remainder + '0') + result;
            else
                result = char(remainder - 10 + 'A') + result;
            temp /= targetBase;
        }
        return result;
    }

    int getDecimal() const { return decimalValue; }
    int getBase() const { return base; }

    // Operator overloads
    NumberSystem operator+(const NumberSystem& rhs) {
        return NumberSystem(this->decimalValue + rhs.decimalValue);
    }

    // Printing support
    friend ostream& operator<<(ostream& os, const NumberSystem& num) {
        os << num.convertTo(num.base) << " (base " << num.base << ")";
        return os;
    }
};

int main() {
    string num1, num2;
    int base1, base2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter base of first number (2,8,10,16): ";
    cin >> base1;

    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter base of second number (2,8,10,16): ";
    cin >> base2;

    try {
        NumberSystem n1(num1, base1);
        NumberSystem n2(num2, base2);

        // Add them
        int resultDecimal = n1.getDecimal() + n2.getDecimal();

        // Choose smaller base
        int resultBase = (base1 < base2) ? base1 : base2;

        // Convert result to that base
        NumberSystem result(resultDecimal);

        cout << "Result = " << result.convertTo(resultBase)
             << " (base " << resultBase << ")" << endl;

    } catch (std::invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
