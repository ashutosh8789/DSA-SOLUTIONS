#include <bits/stdc++.h>
using namespace std;

int max(int a,int b ){
    if(a>=b)
        return a; 
    else 
    return b;
    }


vector<int> leaders(vector<int> nums){
    vector<int> ans;
    int maxi=INT_MIN;

    int n=nums.size()-1;
    for(int i=n;i>=0;i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
            
        }
        maxi=max(maxi,nums[i]);

    }

    sort(ans.begin(),ans.end());

    return ans;
}

int main(){
    vector<int> nums = {10, 22, 12, 3, 0, 6};
    vector<int> num = leaders(nums);
    for(auto it: num){
        cout<<it<<" ";
    }
    return 0;
}