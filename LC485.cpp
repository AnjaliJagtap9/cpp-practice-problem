#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array:"<<endl;
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter array elements 0 and 1"<<endl;
     for(int i=0;i<n;i++){
        cin>>nums[i];
     }
     int count=0;
     int maxCount=0;
       for(int i=0;i<n;i++){
  if(nums[i]==1){
  count++;
  }else{
    count=0;
  }
  if(count>maxCount){
   maxCount=count;
  }
       }
       cout<<"Maximum consecutive ones:"<<maxCount;

}