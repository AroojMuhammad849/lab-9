#include <iostream>
using namespace std;

struct Laptop {
    string brand;
    int ram;
    float price;
};

int main() {
    Laptop L;

    cout << "Enter brand: ";
    cin >> L.brand;

    cout << "Enter RAM (GB): ";
    cin >> L.ram;

    cout << "Enter price: ";
    cin >> L.price;

    cout << "\n--- Laptop Details ---\n";
    cout << "Brand: " << L.brand << endl;
    cout << "RAM: " << L.ram << " GB" << endl;
    cout << "Price: " << L.price << endl;

    return 0;
}

