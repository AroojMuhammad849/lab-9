#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string rev = string(str.rbegin(), str.rend());

    if (str == rev)
        cout << "The string is a Palindrome." << endl;
    else
        cout << "The string is NOT a Palindrome." << endl;

    return 0;
}

