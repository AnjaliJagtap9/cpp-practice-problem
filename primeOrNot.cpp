#include<iostream>
using namespace std;
int primeOrNot(int n){
    int count=0;
    if(n<=1){
        return 0;
    }
    for(int i=1;i<=n;i++){
    if(n%i==0){
        count++;
    }}
    if(count==2){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    cout<<"enter a number:";
    cin>>n;
    if(primeOrNot(n)==1){
cout<<"prime number";
    }else{
        cout<<"Not prime number";
    }
return 0;
}