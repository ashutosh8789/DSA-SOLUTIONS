#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

string two_sum(vector<int> arr, int target,int n)
{

    unordered_map<int, int> mpp;

    for (int i = 0; i < n; i++)
    {
        int element = arr[i];
        int more = target - element;

        if (mpp.find(more) != mpp.end())
        {
            return "YES";
        }

        mpp[element] = i;
    }
    return "NO";
}

int main()
{

    int n, target;
    vector<int> arr{2, 6, 5, 8, 11};
    cout << "Enter size: " << endl;
    cin >> n;
    cout << "Enter target: " << endl;
    cin >> target;
    
    cout<<two_sum(arr, target,n);

    return 0;
}