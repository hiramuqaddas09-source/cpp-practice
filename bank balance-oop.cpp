#include <iostream>
using namespace std;

class BankAccount {
private:
    int balance;

public:
    void setBalance(int b) {
        if (b >= 0)
            balance = b;
        else
            cout << "Invalid balance!" << endl;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.setBalance(1000);
    cout << "Current Balance: $" << account.getBalance() << endl;
    return 0;
}
//*
#include <iostream>
using namespace std;

class Car {
private:
    int speed;

public:
    void setSpeed(int s) {
        if (s >= 0 && s <= 300)
            speed = s;
        else
            cout << "Invalid speed!" << endl;
    }

    int getSpeed() {
        return speed;
    }
};

int main() {
    Car myCar;
    myCar.setSpeed(120);
    cout << "Car Speed: " << myCar.getSpeed() << " km/h" << endl;
    return 0;
}//*

