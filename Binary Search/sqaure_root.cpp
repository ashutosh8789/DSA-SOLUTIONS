#include <bits/stdc++.h>
using namespace std;


int square_root(int num){
    int low = 1;
    int high = num;
    int ans=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        //we could have done mid*mid <= num , but this might give an integer overflow
        //so instead we are just dividing both the sides with mid.
        if(mid<=(num/mid)){
            ans=mid;

            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int number;
    cin>>number;
    int ans=square_root(number);
    cout<<ans;
    return 0;
}
