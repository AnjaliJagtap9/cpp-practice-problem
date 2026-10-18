#include<iostream>
using namespace std;
int main(){
    int ans=0,pow=1;
    int n;
    cout<<"Enter a number:";
    cin>>n;
    while(n>0){
        int rem=n%10;
          ans+=rem*pow;
          n/=10;
          pow*=2;
    }
    cout<<"Decimal number="<<ans<<endl;
}