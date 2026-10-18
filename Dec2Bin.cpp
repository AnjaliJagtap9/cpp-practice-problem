#include<iostream>
using namespace std;
int main(){
    int ans=0,pow=1;
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    while(n>0){
        int rem=n%2;
        n=n/2;
        ans+=rem*pow;
        pow*=10;
        
    }
    cout<<"Binary number:"<<ans;
}