#include <bits/stdc++.h>
using namespace std;

//iterative code
int bs_rotated(vector<int> arr,int key){

    int s=0;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        //rorted sorted array II
        //if(arr[mid]==arr[s]&& arr[s]==arr[e]){
        // s++,e--;
        //continue;
        //}
        //left portion is sorted
        else if(arr[s] <= arr[mid]){
            if(arr[s]<=key && key <=arr[mid])
                e=mid-1;
            else
               s=mid+1;
        }

        //right portion is sorted
        else{
            if(arr[mid] <=key && key <=arr[e])
                s=mid+1;
            else
                e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;


}



int main(){
    vector<int> arr = {5,6,7,8,9,10,1,2,3,4};
    
    //rotated sorted array 2
    //in this type of question there are duplicates so what you can do is you can check
    // if arr[s] == arr[mid] == arr[e]
    //then you trim down your search space
    // s=s+1;
    //e=e-1;
}


//time complexity = O(log n)
//space complexity = O()