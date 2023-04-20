#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std;

void pairSum (vector<int> arr, int Sum)
{
    //Logic
    unordered_set<int> s;

    for(int i=0; i<arr.size(); i++)
    {
        int x = Sum - arr[i];
        if(s.find(x) !=s.end())
        {
            cout<<x<<" - "<<arr[i]<<endl;
        }
    //insert the current no inside set
        s.insert(arr[i]);
    }
}

int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11, 2};
    int S = 4;

    pairSum(arr, S);

    return 0;
}
