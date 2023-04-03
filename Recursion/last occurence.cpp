#include<iostream>
using namespace std;

int lastOcc(int arr[], int n, int key)
{
    if(n==0)
    {
        return -1;
    }

    int subIndex = lastOcc(arr+1,n-1,key);
    if(subIndex == -1)
    {
        if(arr[0]==key)
        {
            return 0;
        }
        else
        {
            return -1;
        }

    }
    else
    {
        return subIndex+1;
    }
}

int main()
{
    int arr[] = {1,3,45,6,73,6,3,32};
    int n = sizeof(arr)/sizeof(int);
    int key = 6;
    //cin>>n;

    cout<<lastOcc(arr,n,key);

    return 0;
}
