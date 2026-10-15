#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int d;
    cout<<"Enter a number:";
    cin>>n;
    int ori_Num=n;
    while(n>0){
     d=n%10;
     int cube=d*d*d;
     n/=10;
     sum=sum+cube;
    }
   if(ori_Num==sum){
    cout<<"ArmStrong Number"<<endl;

   }else{
    cout<<"Not Armstrong number";
   }
}