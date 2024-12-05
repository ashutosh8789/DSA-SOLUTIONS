#include <bits/stdc++.h>
using namespace std;

void Solve(int num,string &output,vector<string> &ans){
    if(num==0){
        ans.push_back(output);
        return;
    }

    //pick 0
    output=output+'0';
    Solve(num-1,output,ans);
    output.pop_back();

    //pick 1
    output=output+'1';
    Solve(num-1,output,ans);
    output.pop_back();

    

}

void print(vector<string> arr){
    for(auto x:arr){
        cout<<x<<" ";
    }
    return;
}

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter the number: "<<endl;

    cin>>num;

    string output="";
    vector<string> ans;

    Solve(num,output,ans);
    print(ans);

    
    return 0;
}
