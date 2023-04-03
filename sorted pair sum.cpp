#include<bits/stdc++.h>
#include<iostream>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    map<int , int> mp;
    pair<int , int> pair1;

    for(int i : arr)
    {
        mp[x - i]++;
    }

    for(int i : arr)
    {
        cout<<mp[i]<<endl;
        if(mp[i] != 0)
        {
            pair1.first = i;
            pair1.second = x - i;
            return pair1;
        }
    }

    pair1.first = -1;
    pair1.second = -1;
    return pair1;
}

int main()
{
    int n = 52;
    pair<int , int> pair1;

    vector<int> vec = {10,22,28,29,30,40};
    pair1 = closestSum(vec, n);
    cout<<pair1.first<<" and "<<pair1.second;

    return 0;
}
