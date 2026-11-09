
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    int n, x;

    cout << "How many elements? ";
    cin >> n;

    cout << "Enter elements: ";

    for(int i = 0; i < n; i++) {
        cin >> x;
        pq.push(x);
    }

    cout << "\nLargest element: " << pq.top();

    pq.pop();

    cout << "\nAfter deleting largest element: ";
    
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
