#include <iostream>
#include <string>
using namespace std;

bool isAnagram(string s, string t)
{
if(s.length() != t.length())
{
return false;
}

int arr[26] = {0};

// Count characters in first string
for(int i = 0; i < s.length(); i++)
{
    arr[s[i] - 'a']++;
}

// Decrease characters from second string
for(int i = 0; i < t.length(); i++)
{
    arr[t[i] - 'a']--;
}

// Check frequencies
for(int i = 0; i < 26; i++)
{
    if(arr[i] != 0)
    {
        return false;
    }
}

return true;


}

int main()
{
string s, t;
cout << "Enter first string: ";
cin >> s;

cout << "Enter second string: ";
cin >> t;

if(isAnagram(s, t))
{
    cout << "true";
}
else
{
    cout << "false";
}

return 0;


}
