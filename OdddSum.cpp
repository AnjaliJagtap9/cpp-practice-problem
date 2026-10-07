#include<iostream>
using namespace std;
int main(){
int n=9;
int sum=0;
int i=1;
while(i<=n){
    if(i%2!=0){
     sum+=i;
    }
    
    i++;
}
cout<<"sum ="<<sum<<endl;

    return 0;
}
