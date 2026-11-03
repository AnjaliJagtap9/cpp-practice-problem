#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {

    int i = s.length() - 1;

    // Skip spaces from the end
    while(i >= 0 && s[i] == ' ') {
        i--;
    }

    int end = i;

    // Find the beginning of the last word
    while(i >= 0 && s[i] != ' ') {
        i--;
    }

    int start = i + 1;

    int length = end - start + 1;

    return length;
}

int main() {

    string s;

    cout << "Enter a string: ";
    getline(cin, s);

    int result = lengthOfLastWord(s);

    cout << "Length of last word: " << result << endl;

    return 0;
}
