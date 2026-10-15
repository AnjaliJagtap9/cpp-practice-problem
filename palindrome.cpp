#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    int dig;
   
    cout<<"Enter a number:";
    cin>>n;
     int ori_n=n;
    while(n>0){
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;

    }
    if(rev==ori_n){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome";
    }
    cout<<"Reverse number="<<rev;
}
