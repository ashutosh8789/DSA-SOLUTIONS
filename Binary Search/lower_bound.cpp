#include <bits/stdc++.h>
#include <algorithm>
using namespace std;




int main(){
    vector<int> arr = {1,2,3,4,5,6,7,7,7,7,8,9,10};
    int key = 7;
    int n=arr.size();
    auto lb = lower_bound(arr.begin(),arr.end(),7) - arr.begin();

    cout<<"posi lb: "<<lb<<endl;

    


    return 0;

}


//time complexity = O(log n)
//space complexity = O()