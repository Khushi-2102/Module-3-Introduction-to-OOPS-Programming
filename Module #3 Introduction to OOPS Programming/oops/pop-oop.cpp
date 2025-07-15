//////Procedural programming language
// #include <iostream>
// using namespace std;

// // Function to calculate area
// int calculateArea(int length, int width) {
//     return length * width;
// }

// int main() {
//     int length, width;

//     // Input values
//     cout << "Enter length of rectangle: ";
//     cin >> length;

//     cout << "Enter width of rectangle: ";
//     cin >> width;

//     // Function call and output
//     int area = calculateArea(length, width);
//     cout << "Area of rectangle (POP): " << area << endl;

//     return 0;
// }



////Object oriented programming langugage

#include <iostream>
using namespace std;

// Rectangle class
class Rectangle {
private:
    int length, width;

public:
    // Method to set dimensions
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    int l, w;

    // Input values
    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter width of rectangle: ";
    cin >> w;

    // Set and compute
    rect.setDimensions(l, w);
    cout << "Area of rectangle (OOP): " << rect.calculateArea() << endl;

    return 0;
}
