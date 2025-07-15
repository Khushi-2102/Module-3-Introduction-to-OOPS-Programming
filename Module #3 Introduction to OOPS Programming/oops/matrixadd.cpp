#include <iostream>
using namespace std;

int main() {
    // Declare two 2x2 matrices and a result matrix
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input first matrix
    cout << "Enter elements of first 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
    }

    // Input second matrix
    cout << "\nEnter elements of second 2x2 matrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
    }

    // Perform matrix addition
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display result matrix
    cout << "\nResult of Matrix Addition (2x2):" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
