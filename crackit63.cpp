#include<iostream>
using namespace std;
int main(){
    string password="1234";
    string input;
    int attempt=0;
    do{
   cout<<"Enter your password:"<<endl;
   cin>>input;
   attempt++;
if(input==password){
    cout<<"Access Guaranted"<<endl;
    break;
}
    }while(attempt<3);
    if(attempt==3 && input!=password){
        cout<<"Account locked"<<endl;
    }
return 0;
}