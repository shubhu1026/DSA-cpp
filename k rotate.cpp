#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> kRotate(vector<int> a, int k){
    // your code  goes here
    int n = a.size();

    for(int i = 0; i < k; i++)
    {
        int j = n - k + i;

        swap(a[i], a[j]);
    }

    for(int i = n-k; i < n; i++)
    {
        swap(a[i-1], a[i]);
    }

    return a;
}

int main()
{
    int n = 2;
    //vector<int> vec = {-1, 1, 2, 5, 6, 8};
    vector<int> vec = {2, 5, 8, 9, 6, 3};
    for(int i : vec)
    {
        cout<<i<<" ";
    }

    vec = kRotate(vec, n);
    cout<<endl;
    cout<<"After rotation: "<<endl;
    for(int i : vec)
    {
        cout<<i<<" ";
    }

    return 0;
}
