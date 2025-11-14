#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Enter roll: ";
    cin >> s.roll;

    cout << "Enter GPA: ";
    cin >> s.gpa;

    cout << "\n--- Student Info ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "GPA: " << s.gpa << endl;

    return 0;
}

