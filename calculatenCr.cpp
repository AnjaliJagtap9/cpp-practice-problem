#include<iostream>
using namespace std;
int factOfN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int ncr(int n,int r){
    int factorial_n=factOfN(n);
    int factorial_r=factOfN(r);
    int factorial_nmr=factOfN(n-r);
    return factorial_n/(factorial_r*factorial_nmr);
}
int main(){
    int n=9;
    int r=3;
  cout<<ncr( n,r);
}