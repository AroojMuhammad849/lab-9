#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    int key, found = 0;
    cout << "Enter value to search: ";
    cin >> key;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            cout << "Value found at index " << i << endl;
            found = 1;
            break;
        }
    }

    if (!found)
        cout << "Value not found in the array." << endl;

    return 0;
}

