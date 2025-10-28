#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 3, 8, 1, 2};   // Step 1: Initialize array
    int n = 5;

    // Step 2: Find Maximum and Minimum
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Step 3: Display Results
    cout << "Array Elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "Maximum Value: " << max << endl;
    cout << "Minimum Value: " << min << endl;

    return 0;
}

