#include <iostream>
using namespace std;

int main() {
    // Constant declaration
    const float PI = 3.14159;

    // Variable declarations
    int age = 20;
    float height = 5.8;
    char grade = 'A';
    bool isStudent = true;
    string name = "Khushi";

    // Display initial values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;
    cout << "Value of PI (constant): " << PI << endl;

    // Performing operations
    age += 5;  // increment age
    height += 0.2;  // add to height
    grade = 'B';  // change grade

    // Display updated values
    cout << "\n--- After Updates ---" << endl;
    cout << "Updated Age: " << age << endl;
    cout << "Updated Height: " << height << " feet" << endl;
    cout << "Updated Grade: " << grade << endl;

    return 0;
}