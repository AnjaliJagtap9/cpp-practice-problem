
#include<iostream>
using namespace std;

void primeFactorization(int n) {
    cout << n << " = ";

    if (n == 1) {
        cout << "1";
        return;
    }

    int i = 2;

    while (n > 1) {
        if (n % i == 0) {
            cout << i;
            n = n / i;

            if (n > 1) {
                cout << " x ";
            }
        } else {
            i++;
        }
    }
}

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        primeFactorization(i);
        cout << endl;
    }

    return 0;
}

