#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;

    cout << "Enter first student's name, roll, gpa: ";
    cin >> s1.name >> s1.roll >> s1.gpa;

    cout << "Enter second student's name, roll, gpa: ";
    cin >> s2.name >> s2.roll >> s2.gpa;

    if (s1.gpa > s2.gpa) {
        cout << "\n" << s1.name << " has higher GPA.\n";
    }
    else if (s2.gpa > s1.gpa) {
        cout << "\n" << s2.name << " has higher GPA.\n";
    }
    else {
        cout << "\nBoth students have equal GPA.\n";
    }

    return 0;
}

