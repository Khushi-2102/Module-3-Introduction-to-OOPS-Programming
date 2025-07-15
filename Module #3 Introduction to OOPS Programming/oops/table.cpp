#include <iostream>
using namespace std;

int main() {
    int num;

    // Ask the user for a number
    cout << "Enter a number to display its multiplication table: ";
    cin >> num;

    // Display multiplication table using a for loop
    cout << "\nMultiplication Table of " << num << ":\n";

    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}