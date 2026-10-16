
#include <iostream>
using namespace std;

int main() {
    int n, original, temp;
    int digit, sum = 0, count = 0;

    cout << "Enter a number: ";
    cin >> n;

    original = n;
    temp = n;

    // Count the number of digits
    while (temp > 0) {
        count++;
        temp = temp / 10;
    }

    temp = n;

    // Calculate the sum of each digit raised to count
    while (temp > 0) {
        digit = temp % 10;

        int power = 1;

        for (int i = 1; i <= count; i++) {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == original) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not Armstrong Number" << endl;
    }

    return 0;
}

