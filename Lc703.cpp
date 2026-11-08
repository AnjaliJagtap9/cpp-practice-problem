
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;

    int arr[] = {10, 5, 20, 8, 15};
    int k = 3;

    for(int i = 0; i < 5; i++) {
        pq.push(arr[i]);

        if(pq.size() > k) {
            pq.pop();
        }
    }

    cout << "3rd Largest Element: " << pq.top();

    return 0;
}
