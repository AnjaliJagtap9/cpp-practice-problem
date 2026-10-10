#include <iostream>
using namespace std;

int main() {
int n;
cout << "Enter the number: ";
cin >> n;


for (int i = 0; i < n; i++) {
    char ch = 'A' + i;

    for (int j = i; j >= 0; j--) {
        cout << char('A' + j) << " ";
    }

    cout << endl;
}

return 0;


}
