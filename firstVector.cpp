#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec={'a','e','i','o','u'};
    cout<<"size="<<vec.size()<<endl;
    for(char i: vec){
        cout<<i<<endl;
    }
return 0;
}