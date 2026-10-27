#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,1,4,5,3,8};
    int sz=8;
    for(int i=0;i<sz;i++){
        int count=0;
        for(int j=0;j<sz;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1){
            cout<<arr[i]<< " ";
        }
    }
    return 0;
}