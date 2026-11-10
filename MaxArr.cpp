#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 25, 5, 40, 15};
    int n = 5;

    int maximum = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }

    cout << "Maximum element: " << maximum;

    return 0;
}
