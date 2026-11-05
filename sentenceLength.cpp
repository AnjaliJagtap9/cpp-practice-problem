#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Your sentence: " << sentence << endl;
    cout << "Total characters: " << sentence.length() << endl;

    return 0;
}
