
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int limit = 1000000;

    vector<bool> isPrime(limit, true);

    isPrime[0] = false;
    isPrime[1] = false;

    for (int i = 2; i * i < limit; i++) {
        if (isPrime[i] == true) {
            for (int j = i * i; j < limit; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i < limit; i++) {
        if (isPrime[i] == true) {
            cout << i << " ";
        }
    }

    return 0;
}

