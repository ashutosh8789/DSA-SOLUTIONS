#include <iostream>
#include <vector>
using namespace std;


int maxinum_subarray(int n,vector<int> &arr){
    int maxi=INT_MIN;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum =sum + arr[i];
        maxi = max(maxi,sum); 
        if(sum<0){ 
            sum = 0;
        }

    }
    return maxi;
}

//Print subarray also
vector<int> maxinum_subarray1(int n,vector<int> &arr){
    int maxi=INT_MIN;
    int sum = 0;
    int start = 0;
    vector<int> ans;

    int s=-1,e=-1;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum =sum + arr[i];
        if(sum>maxi){
            maxi=sum;

            s=start;
            e = i;
        } 
        if(sum<0){ 
            sum = 0;
            
        }

    }
    for(int i=s;i<=e;i++){
        ans.push_back(arr[i]);
    }
    return ans;
}




int main(){

    vector<int> arr1 = {5,4,-1,7,8};
    int n = arr1.size();
    

    int ans = maxinum_subarray(n,arr1);
    cout<<ans;

    return 0;


}
