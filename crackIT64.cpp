
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    // Temporary: display the secret number for testing
    cout << "Secret number: " << secretNumber << endl;

    cout << "Guess a number between 1 and 100!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Correct! You guessed the number!" << endl;
            cout << "Number of attempts: " << attempts << endl;
            break;
        }
        else if (guess < secretNumber) {
            cout << "Higher!" << endl;
        }
        else {
            cout << "Lower!" << endl;
        }
    }

    return 0;
}

