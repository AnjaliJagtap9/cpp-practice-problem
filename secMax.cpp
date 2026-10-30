#include<iostream>
using namespace std;
int main(){
int max=INT_MIN;
int secondMax=INT_MIN;
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
    if(arr[i] > max) { secondMax = max;
         max = arr[i];
     } 
     else if(arr[i] > secondMax && arr[i] < max) { 
        secondMax = arr[i];
     } } 
    cout << "Maximum number = " << max << endl; 
    cout << "Second maximum = " << secondMax << endl;


    return 0;

}