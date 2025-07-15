#include <iostream>
using namespace std;

int main() {
    int secretNumber = 42;  // You can change this value to anything between 1 and 100
    int userGuess;
    int attempts = 0;

    cout << "Guess the number (between 1 and 100):" << endl;

    // Loop until the user guesses correctly
    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber) {
            cout << "Too low! Try a higher number." << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try a lower number." << endl;
        } else {
            cout << "🎉 Correct! You guessed the number in " << attempts << " attempts." << endl;
        }

    } while (userGuess != secretNumber);

    return 0;
}