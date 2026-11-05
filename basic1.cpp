
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;

    cout << "Enter three words: ";
    cin >> s1;

    cout << "Using cin: " << s1 << endl;

    cin.ignore();

    cout << "Enter three words again: ";
    getline(cin, s2);

    cout << "Using getline: " << s2 << endl;

    return 0;
}
