#include <bits/stdc++.h>
using namespace std;


vector<vector<int>> three_sum(vector<int> num){
    int n=num.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        if(i>0 && num[i]==num[i-1]) continue; 
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum = num[i]+num[j]+num[k];
            if(sum < 0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                vector<int> temp = {num[i],num[j],num[k]};
                ans.push_back(temp);
                j++;
                k++;
                while(j<k && num[j] ==num[j-1]) j++;
                while(j<k && num[k] ==num[k+1]) k--;

            }
        }
    }

    return ans;
}

void printArr(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        cout<<"[ ";
        for(int j=0;j<arr[0].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"]";
        
    }
}

int main(){

    vector<int> arr = {-1,0,1,2,-1,-4};
    vector<vector<int>> ans = three_sum(arr);
    printArr(ans);
    return 0;
}