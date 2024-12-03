#include <bits/stdc++.h>
using namespace std;


vector<int> next_permutationFnc(vector<int> nums){

    int n= nums.size()-1;
    
    int idx = -1;

    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            idx=i;
            break;
        }
    }

    if(idx ==-1){
        reverse(nums.begin(),nums.end());
        return nums;

    }

    for(int i=n-1;i>idx;i--){
        if(nums[i]>nums[idx]){
            swap(nums[i],nums[idx]);
        }
        break;
    }

    sort(nums.begin()+idx+1,nums.end());

    return nums;

    
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = next_permutationFnc(A);

    
    for (auto it : ans) {
        cout << it << " ";
    }
   
    return 0;
}