#include<iostream>
using namespace std;
int sumOfDig(int num){
    int sum=0;
    while(num>0){
        int lastDigit=num%10;
        num=num/10;
        sum=sum+lastDigit;
    }
    return sum;
}
int main(){
    cout<<"sum of digits ="<<sumOfDig(2345);
}