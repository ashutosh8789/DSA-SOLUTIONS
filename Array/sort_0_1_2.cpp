#include <iostream>
#include <vector>
using namespace std;

void sort_012(vector<int> &nums,int n){
    int low=0;
    int mid=0;
    int high = n-1;

    while(mid<=high){
        switch (nums[mid])
        {
        case 0:
            swap(nums[mid++],nums[low++]);
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(nums[mid],nums[high--]);
            break;
            
        }
    }
}



int main()
{
    vector<int> nums ={ 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
    int n = nums.size();
    sort_012(nums,n);
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}