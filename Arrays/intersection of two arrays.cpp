#include<bits/stdc++.h>
#include<map>
using namespace std ;

 void printIntersection(int* nums1,int n, int* nums2,int m)
{
        // write your code here
        // n is the size of array nums1 and
        // m is the size of array nums2 and
        map<int,int> mp;
        for(int i = 0; i<n ; i++)
        {
            mp[nums1[i]]++;
        }

        for(int j =0; j < m; j++)
        {
            if(mp[nums2[j]])
            {
                cout<<nums2[j]<<" ";
            }
        }
}

int main()
{
    int n = 4;
    int m = 5;
    int arr1[n] = { 1, 2, 4, 9};
    int arr2[m] = {2,3,5,9,11};

    printIntersection(arr1, n, arr2, m);

    return 0;
}
