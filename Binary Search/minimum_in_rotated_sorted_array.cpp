#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findMin(vector<int> arr){
    int low = 0;
    int n=arr.size();
    int high=n-1;
    int ans = INT_MAX;
    
    while(low<=high){
        int mid = low+(high-low)/2;
        //if left half is sorted
        if(arr[low]<=arr[mid]){
            ans = min(ans,arr[low]);
            low=mid+1;
        }
        else{
            ans=min(ans,arr[mid]);
            high=mid-1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {5,6,7,8,-4,1,2,3,4};
    int x= findMin(arr);
    cout<<"minimum is: "<<x<<endl;

    return 0;

}