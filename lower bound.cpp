#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int val)
{
    // your code goes here
    map<int, int> mp;
    int n = A.size();
    int index;

    if(val < A[0])
    {
        return -1;
    }

    for(int i = 0; i < n; ++i)
    {
        mp[i] = val - A[i];
    }

    int min = INT_MAX;

    for (auto i = mp.begin(); i != mp.end(); ++i)
    {
        if(min > i->second && i->second>=0)
        {
            min = i->second;
            index = i->first;
        }
    }

    return A[index];
}

int lowerBoundWithBinarySearch(vector<int> A, int val)
{
    int s = 0;
    int e = A.size() - 1;
    int ans = -1;

    while(s<=e)
    {
        int mid = (s+e)/2;

        if(A[mid] <= val)
        {
            ans = A[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec = {-1, 1, 2, 5, 6, 8};
    cout<<lowerBound(vec, n);

    return 0;
}
