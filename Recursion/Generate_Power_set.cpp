#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> &nums, vector<int> output, vector<vector<int>> &ans, int index)
{
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }
    // exclude
    solve(nums, output, ans, index + 1);

    // include
    int digit = nums[index];
    output.push_back(digit);
    solve(nums, output, ans, index + 1);
    output.pop_back();
}
void print(vector<vector<int>> arr ){
    for(auto x: arr){
         
    }
    return;
}

int main(int argc, char const *argv[])
{
    int num_size;
    cin>>num_size;

    vector<int> nums(num_size);
    for(int i=0;i<num_size;i++){
         nums[i]=i+1;
    }
    vector<int> output;
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, output, ans, index);

    return 0;
}