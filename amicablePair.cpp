#include<iostream>
using namespace std;
int sumOfDivisor(int n){
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    return sum;
}
int amicablePair(int a,int b){
    if(sumOfDivisor(a)==b && sumOfDivisor(b)==a){
        return 1;
    }else{
        return 0;
    }
}
int main() { 
    int a, b;
     cout << "Enter two numbers: "; 
     cin >> a >> b;
      if (amicablePair(a, b) == 1) { 
        cout << "Amicable Pair";
     } 
     else { 
        cout << "Not an Amicable Pair"; 
    } return 0; 
}