#include <iostream>     // for input/output
#include <string>       // for string data type

using namespace std;

int main() {
    string name;
    int age;

    // Ask for user's name
    cout << "Enter your name: ";
    getline(cin, name);  // Allows full name with spaces

    // Ask for user's age
    cout << "Enter your age: ";
    cin >> age;

    // Display personalized greeting
    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}