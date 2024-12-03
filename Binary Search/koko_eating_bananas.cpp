#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int max_(int num1,int num2){
    if(num1>=num2){
        return num1;
    }
    return num2;
}

int maxOf(vector<int> arr){
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        maxi=max_(arr[i],maxi);

    }
    return maxi;
}
int calculate_hourly(vector<int> arr, int hourly){
    int totalH=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        totalH +=ceil((double)arr[i]/(double)hourly);
    }
    return totalH; 
}


int min_banana(vector<int> arr, int h){
    int low=1;
    int high = maxOf(arr);
    int ans=INT_MIN;
    while(low<=high){
        int mid=low+(high-low)/2;
        int totalH = calculate_hourly(arr,mid);
        if(totalH <=h){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return low;

}


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
