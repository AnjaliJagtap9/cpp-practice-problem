#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    bool isMinHeap=true;
    for(int i=0;i<n;i++){
        int left=2*i+1;
        int right=2*i+2;
        if(left<n && arr[i]>arr[left]){
            isMinHeap=false;
            break;
        }
        if(right<n && arr[i]>arr[right]){
            isMinHeap=false;
            break;
        }
        
    }
    if(isMinHeap){
        cout<<"The array is a min heap."<<endl;
    }
    else{
        cout<<"The array is not a min heap."<<endl;
    }
    return 0;
}