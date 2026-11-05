#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your full name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nYour name is: " << name << endl;
    cout << "Your age is: " << age << endl;

    return 0;
}
