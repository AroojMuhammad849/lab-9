#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open the file for reading
    ifstream fin("data.txt");   // Make sure data.txt exists from Task 1

    if (!fin) {                 // Check if file opened successfully
        cout << "Error: File not found!" << endl;
        return 1;
    }

    string name;
    int age;
    float gpa;

    // Read and display all records
    while (fin >> name >> age >> gpa) {
        cout << name << " " << age << " " << gpa << endl;
    }

    fin.close();  // Close the file

    return 0;
}

