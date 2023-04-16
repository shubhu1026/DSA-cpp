#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

pair<int,int> staircaseSearch(vector<vector<int>> arr, int row, int col,int key)
{
    // your code goes here
    if(key<arr[0][0] || key > arr[row-1][col-1])
    { return {-1,-1}; }

    int i = 0;
    int j = col - 1;

    while(i <= row-1 && j >= 0)
    {
        if(arr[i][j] == key)
        {
            return {i,j};
        }
        else if(arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }

    return {-1,-1};
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

    pair<int, int> result = staircaseSearch(arr,4,4,15);

    cout<<result.first<<" "<<result.second<<endl;
}
