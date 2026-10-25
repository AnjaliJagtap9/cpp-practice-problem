#include<iostream>
using namespace std;
int searchArr(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
   int arr[]={2,6,7,9,10,22,14,8};
   int size=8;
   int target=6;
   cout<<searchArr(arr,size,target);
   return 0;
}