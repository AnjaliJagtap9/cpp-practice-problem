
#include<iostream>
using namespace std;

int primeOrNot(int n) {
    if (n <= 1) {
        return 0;
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        if (primeOrNot(i) == 1) {
            cout << i << " ";
        }
    }

    return 0;
}

