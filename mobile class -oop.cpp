#include <iostream>
using namespace std;

class Mobile {
private:
    string brand;
    string model;
    double price;

public:
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setPrice(double p) {
        if (p > 0)
            price = p;
        else
            cout << "Invalid price!" << endl;
    }

    string getBrand() { return brand; }
    string getModel() { return model; }
    double getPrice() { return price; }
};

int main() {
    Mobile m;
    m.setBrand("Samsung");
    m.setModel("Galaxy S21");
    m.setPrice(999.99);

    cout << "Brand: " << m.getBrand() << endl;
    cout << "Model: " << m.getModel() << endl;
    cout << "Price: $" << m.getPrice() << endl;

    return 0;
}
