#include<iostream>
using namespace std;
int main(){
  int n;
  int sum=0;
     cout<<"Enter the number : ";
     cin>>n;
    for(int i=1;i<=n;i++){
     if(i%3==0){
      sum+=i;
  }
   }
   cout<<"Sum of multiples of 3: "<<sum<<endl;
   return 0;
}