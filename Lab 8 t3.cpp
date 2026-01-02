#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle R;

    cout << "Enter length: ";
    cin >> R.length;

    cout << "Enter width: ";
    cin >> R.width;

    float area = R.length * R.width;
    float perimeter = 2 * (R.length + R.width);

    cout << "\n--- Rectangle Results ---\n";
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;

    return 0;
}

