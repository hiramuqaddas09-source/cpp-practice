#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class NumberSystem
{
    string digits;
    int base;

    int toDecimal(string num, int b)
    {
        int value = 0, power = 1;
        for (int i = num.size() - 1; i >= 0; i--)
        {
            char c = toupper(num[i]);
            int digit;
            if (c >= '0' && c <= '9')
                digit = c - '0';
            else
                digit = c - 'A' + 10;

            value += digit * power;
            power *= b;
        }
        return value;
    }

    string fromDecimal(int num, int b)
    {
        if (num == 0) return "0";
        string result = "";
        while (num > 0)
        {
            int rem = num % b;
            char c;
            if (rem < 10)
                c = rem + '0';
            else
                c = rem - 10 + 'A';
            result = c + result;
            num /= b;
        }
        return result;
    }

public:
    NumberSystem(string num, int b)
    {
        digits = num;
        base = b;
    }

    int toDec()
    {
        return toDecimal(digits, base);
    }

    string convertTo(int targetBase)
    {
        int dec = toDecimal(digits, base);
        return fromDecimal(dec, targetBase);
    }

    NumberSystem operator+(NumberSystem rhs)
    {
        int sum = this->toDec() + rhs.toDec();
        // store sum in decimal as string
        string s = fromDecimal(sum, 10);
        return NumberSystem(s, 10);
    }
};

int main()
{
    string num1, num2;
    int base1, base2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter base of first number (2, 8, 10, 16): ";
    cin >> base1;

    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter base of second number (2, 8, 10, 16): ";
    cin >> base2;

    NumberSystem n1(num1, base1);
    NumberSystem n2(num2, base2);

    NumberSystem result = n1 + n2;

    cout << "\nSum in Decimal: " << result.toDec() << endl;
    cout << "Sum in Binary: " << result.convertTo(2) << endl;
    cout << "Sum in Octal: " << result.convertTo(8) << endl;
    cout << "Sum in Hexa: " << result.convertTo(16) << endl;

    return 0;
}

