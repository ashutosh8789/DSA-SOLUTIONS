#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <map>
using namespace std;


int largestSubArray(int n,vector<int> &arr){
    unordered_map<int,int> mpp;
    int maxi=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mpp.find(sum)!= mpp.end()){
                maxi=max(maxi,i-mpp[sum]); 
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}




int main(){

    vector<int> arr1 = {5,4,-1,7,8,-8,-7,1};
    int n = arr1.size();
    

    int ans = largestSubArray(n,arr1);
    cout<<ans;

    return 0;


}
