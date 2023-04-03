#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    if(n==0)
    {
        return -1;
    }

    if(arr[0] == key)
    {
        return 0;
    }
    int subIndex = firstOcc(arr + 1, n-1, key);
    if(subIndex != -1)
    {
        return subIndex+1;
    }
    return -1;
}

int main()
{
    int arr[] = {1,3,45,6,73,32};
    int n = sizeof(arr)/sizeof(int);
    int key = 73;
    //cin>>n;

    cout<<firstOcc(arr,n,key);

    return 0;
}
