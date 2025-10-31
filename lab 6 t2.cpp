#include <iostream>
#include <string>
#include <cctype>  // for tolower() and isalpha()
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // allows spaces in input

    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = tolower((unsigned char)str[i]); // convert to lowercase safely
        if (isalpha(ch)) { // check only letters
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}

