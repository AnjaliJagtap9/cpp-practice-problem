#include<iostream>
using namespace std;

int factOfN(int n){
int fact=1;
for(int i=1;i<=n;i++){
    fact*=i;

}
return fact;
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<factOfN(n);

}