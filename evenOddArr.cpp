#include<iostream>
using namespace std;
int main(){
int arr[]={1,2,3,4,5,6,7,8,9,10};
int sz=10;
for(int i=0;i<sz;i++){
   if(arr[i]%2==0){
    cout<<"even number="<<arr[i]<<endl;

   }else{
    cout<<"odd="<<arr[i]<<endl;
   }
}

    return 0;
}