#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    vector<int> vec;
    int count = 1;

    for(int col = n - 1; col >= 0; --col)
    {
        if(count % 2 == 0)
        {
            for(int row = m - 1; row >= 0; --row)
            {
                vec.push_back(arr[row][col]);
            }
        }
        else
        {
            for(int row = 0; row < m; ++row)
            {
                vec.push_back(arr[row][col]);
            }
        }

        count++;
    }

    return vec;
}

int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> b = {5,6,7,8};
    vector<int> c = {9,10,11,12};
    vector<int> d = {13,14,15,16};

    vector<vector<int>> arr;
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    arr.push_back(d);

    vector<int> result = WavePrint(4,4,arr);

    for(auto x : result)
    {
        cout<<x<<" ";
    }
}
