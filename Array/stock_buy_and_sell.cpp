#include <iostream>
#include <vector>
using namespace std;

int min(int a,int b){
    if(a>=b){
        return b;
    }
    return a;
}
int max(int a,int b){
    if(a>=b){
        return a;
    }
    return b;
}

int max_profit(vector<int> nums){

    int n=nums.size();
    int mini = INT_MAX;
    int profit = 0;

    for(int i=0;i<n;i++){
        mini= min(mini,nums[i]);
        int curr_profit = nums[i] - mini;
        profit = max(profit,curr_profit);
        

    }

    return profit;
}

int main() {
    vector<int> arr ={7,1,5,3,6,4};
    cout<<max_profit(arr);
    return 0;
}