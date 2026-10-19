#include<iostream>
using namespace std;
int main(){
    int n;
        int sum=0;
        cout<<"Enter a number";
    do{
        cin>>n;
        sum+=n;
    }while(n!=0);
    cout<<"sum is ="<<sum;

}