#include <bits/stdc++.h>
using namespace std;

//iterative code
int binary_search(vector<int> arr,int key){

    int s=0;
    int e=arr.size()-1;

    int mid=s+(e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;


}

//recursive 
int binarySearch(vector<int> arr,int s,int e,int key){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
         return binarySearch(arr,s,mid-1,key);
    }
}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int posi = binary_search(arr,7);
    int posi2 = binarySearch(arr,0,arr.size()-1,7);

    cout<<"posi: "<<posi<<endl;
    cout<<"posi2: "<<posi2<<endl;


    


    return 0;

}


//time complexity = O(log n)
//space complexity = O()