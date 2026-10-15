#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int dig=0;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;

    }
    cout<<"Reverse number="<<rev;
}