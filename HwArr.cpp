#include<iostream>
using namespace std;
int main(){
    int nums[]={23,1,8,76,-4,30};
    int size=6;
    int smallest=INT_MAX;
    int largest=INT_MIN;
    int index1,index2;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
            index1=i;
        }
        if(nums[i]>largest){
            largest=nums[i];
            index2=i;
        }
    }
    cout<<"Smallest number:"<<smallest<<endl;
    cout<<"Smallest number found at:"<<index1<<endl;
    cout<<"largest number:"<<largest<<endl;
    cout<<"Largest number found at: "<<index2<<endl;
return 0;
}