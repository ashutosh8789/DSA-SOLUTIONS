#include <iostream>
#include <vector>
using namespace std;

int majority_nby2(vector<int> &nums,int n){

    int majority =-1;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            majority = nums[i];
            cnt++;
        }
        else if(cnt!=0 && nums[i]!=majority){
            cnt--;
        }
        else if(nums[i]==majority){
            cnt++;
        }
    }
    return majority;
}

int main(){

    
    vector<int> nums = {2,2,2,5,6,3,1,2,2,2,2,2,2};
    
    int n = nums.size();
    cout<<n;
    
    cout<<majority_nby2(nums,n);
    return 0;
}