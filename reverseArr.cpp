#include<iostream>
using namespace std;
int main(){
   int arr[]={1,2,3,4,5,6,7,8,9};
   int sz=9;
   int start=0;
   int end=sz-1;
   while(start<end){
      swap(arr[start],arr[end]);
      start++;
      end--;
   }
   for(int i=0;i<sz;i++){
      cout<<arr[i];
   }
}
