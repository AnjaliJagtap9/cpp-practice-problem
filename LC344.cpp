#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {

        int start = 0;
        int end = s.size() - 1;

        while(start < end) {

            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;

            start++;
            end--;
        }
    }
};

int main() {

    Solution obj;

    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    obj.reverseString(s);

    cout << "Reversed string: ";

    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }

    return 0;
}
