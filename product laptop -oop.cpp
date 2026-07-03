#include <iostream>
using namespace std;

class Product {
private:
    string name;
    int quantity;

public:
    void setProduct(string n, int q) {
        name = n;
        quantity = q;
    }

    void showProduct() {
        cout << "Product: " << name << "\nQuantity: " << quantity << endl;
    }
};

int main() {
    Product p1;
    p1.setProduct("Laptop", 15);
    p1.showProduct();
    return 0;
}

