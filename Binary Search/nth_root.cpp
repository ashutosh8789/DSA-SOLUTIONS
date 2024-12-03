#include <bits/stdc++.h>
using namespace std;

int NthRoot(int n,int m){
    int low=1;
    int high=m;
    while(low<=high){
        int mid=low+(high-low)/2;
        int midN = pow(mid,n);
        if(midN ==m){
            return mid;
        }
        else if(midN<m) low=mid+1;
        else high=mid-1;
    }
    return -1;

}

int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    cout<<NthRoot(n,m);
    
    return 0;
}
