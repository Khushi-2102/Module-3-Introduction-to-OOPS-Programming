#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare array of size n
    int sum = 0;

    // Input array elements
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];  // Add to sum
    }

    // Calculate average
    float average = static_cast<float>(sum) / n;

    // Display results
    cout << "\nSum of the array elements: " << sum << endl;
    cout << "Average of the array elements: " << average << endl;

    return 0;
}
