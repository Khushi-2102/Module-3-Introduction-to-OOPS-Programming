#include <iostream>
using namespace std;

int main() {
    // Implicit Type Conversion
    int intVal = 10;
    float floatVal;

    // Automatically converts int to float
    floatVal = intVal;  

    cout << "--- Implicit Type Conversion ---" << endl;
    cout << "int value: " << intVal << endl;
    cout << "Converted to float: " << floatVal << endl;

    // Explicit Type Conversion
    float price = 99.99;
    int wholePrice;

    // Manually converting float to int (explicit cast)
    wholePrice = (int)price;  // or use static_cast<int>(price)

    cout << "\n--- Explicit Type Conversion ---" << endl;
    cout << "Original float price: " << price << endl;
    cout << "Converted to int (whole part): " << wholePrice << endl;

    return 0;
}