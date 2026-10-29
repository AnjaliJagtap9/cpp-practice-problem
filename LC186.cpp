#include <iostream>
#include <vector>
using namespace std;

int main() {
int n;
cout << "Enter the size of the array: ";
cin >> n;

```
vector<int> nums(n);

cout << "Enter the array elements: ";
for (int i = 0; i < n; i++) {
    cin >> nums[i];
}

int ans = 0;

for (int val : nums) {
    ans = ans ^ val;
}

cout << "The single number is: " << ans << endl;

return 0;
```

}
