#include <iostream>
using namespace std;

int main() {
    int rows;

    // Ask user for number of rows
    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop for each row
    for (int i = 1; i <= rows; i++) {
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  // Move to next line
    }

    return 0;
}