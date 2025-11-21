#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Step 1: Write data to file
    ofstream fout("data.txt");   // Create and open the file

    fout << "Alice 20 3.5\n";    // Write first student record
    fout << "Bob 22 3.7\n";      // Write second student record

    fout.close();                // Close file after writing

    return 0;
}

