#include <iostream>
using namespace std;

// Global variable
int globalVar = 100;

// Function to demonstrate local variable
void showLocalScope() {
    int localVar = 50;  // Local variable
    cout << "Inside showLocalScope():" << endl;
    cout << "Local Variable: " << localVar << endl;
    cout << "Global Variable: " << globalVar << endl;
}

// Function to modify global variable
void modifyGlobal() {
    globalVar += 10;  // Modify global variable
    cout << "Inside modifyGlobal(): Global Variable modified to " << globalVar << endl;
}

int main() {
    cout << "Inside main():" << endl;
    cout << "Global Variable: " << globalVar << endl;

    showLocalScope();      // Demonstrates local variable
    modifyGlobal();        // Modifies global variable

    cout << "Back in main(): Global Variable is now " << globalVar << endl;

    // Uncommenting the below line will cause an error because localVar is not visible here
    // cout << localVar;

    return 0;
}
