#include<iostream>
using namespace std;

    int heapHeight(int n,int arr[]){
        if(n==1){
            return 1;
        }
        int height=0;
        while(n>1){
            n=n/2;
            height++;
        }
        return height;
    }
    int main(){
        
        int n;
        cout<<"Enter the number of elements in the heap: ";
        cin>>n;
        int arr[n];
        cout<<"Enter the elements of the heap: ";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int height=heapHeight(n,arr);
        cout<<"Height of the heap is: "<<height<<endl;
        return 0;
}