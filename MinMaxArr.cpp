#include<iostream>
using namespace std;
int main(){
    int nums[]={23,1,8,76,-4};
    int size=6;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    for(int i=0;i<size;i++){
        smallest=min(smallest,nums[i]);
        largest=max(largest,nums[i]);
    }
    cout<<"Smallest number:"<<smallest<<endl;
    cout<<"largest number:"<<largest;
return 0;
}