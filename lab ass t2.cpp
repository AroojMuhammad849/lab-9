#include <iostream>
using namespace std;

int main() {
    string name;
    int rollNo;
    float gpa;

    for (int i = 1; i <= 3; i++) {
        cout << "Enter name of student " << i << ": ";
        cin >> name;
        cout << "Enter roll number of student " << i << ": ";
        cin >> rollNo;
        cout << "Enter GPA of student " << i << ": ";
        cin >> gpa;
        cout << "-----------------------------" << endl;
    }

    return 0;
}

