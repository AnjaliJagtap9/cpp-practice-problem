#include<iostream>
using namespace std;
void fib(int n){
int a=0,b=1;
int c;
for(int i=a;i<n;i++){
    cout<<a<<" ";
    c=a+b;
    a=b;
    b=c;
    
}
}
int main(){
    int n;
    cout<<"Enter nth term: ";
    cin>>n;
    fib(n);
    return 0;
}