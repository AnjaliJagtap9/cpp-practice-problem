
#include <iostream>
using namespace std;

int decToBin(int n) {
    int ans = 0, power = 1;

    while (n > 0) {
        int rem = n % 2;
        n = n / 2;

        ans += rem * power;
        power *= 10;
    }

    return ans;
}

int main() {
    int n = 50;

    cout << "Binary number: " << decToBin(n) << endl;

    return 0;
}
