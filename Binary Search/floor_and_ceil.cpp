#include <bits/stdc++.h>
using namespace std;


int floor_bs(vector<int> arr,int key){

    int s=0;
    int ans=-1;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]<=key){
            ans=arr[mid];
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;


}
int ceil_bs(vector<int> arr,int key){

    int s=0;
    int ans=-1;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]>=key){
            ans=arr[mid];
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;


}




int main(){
    vector<int> arr = {1,2,3,4,5,6,8,9,10};
    
    int f_ans = floor_bs(arr,7);
    int c_ans = ceil_bs(arr,7);

    cout<<"floor: "<<f_ans<<" "<<"ceil: "<<c_ans<<endl;


    


    return 0;

}


//time complexity = O(log n)
//space complexity = O()