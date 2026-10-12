#include<iostream>
using namespace std;

int minOfTwo(int a,int b){
    if(a<=b){
        return a;
    }
    else{
        return b;
    }
   
}
int main(){
cout<<"min of two"<< minOfTwo(5,3);
  return 0;
}
  
