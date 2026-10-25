#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int product=1;
    int arr[]={1,2,3,4,5,6,7};
    int sz=7;
    for(int i=0;i<sz;i++){
     sum+=arr[i];
     product*=arr[i];
    }
    cout<<"sum of array element="<<sum<<endl;
    cout<<"Product of array element="<<product<<endl;
}