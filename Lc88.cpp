#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
int i = m;
    for (int j = 0; j < n; j++) {
        nums1[i] = nums2[j];
        i++;
    }

    sort(nums1.begin(), nums1.end());
}


};

int main() {
vector<int> nums1 = {1, 2, 3, 0, 0, 0};
vector<int> nums2 = {2, 5, 6};

int m = 3;
int n = 3;

Solution s;
s.merge(nums1, m, nums2, n);

cout << "Merged array: ";

for (int i = 0; i < m + n; i++) {
    cout << nums1[i] << " ";
}

cout << endl;

return 0;

}
