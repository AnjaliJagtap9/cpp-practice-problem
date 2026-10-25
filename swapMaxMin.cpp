#include<iostream>
using namespace std;
int main(){
    int min=INT_MAX;
    int max=INT_MIN;
    int arr[]={23,4,5,6,7,-1};
    int sz=6;
    for(int i=0;i<sz;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
        swap(min,max);
    }
    cout<<min<<endl;
    cout<<max<<endl;
}