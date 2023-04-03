#include<iostream>
using namespace std;

bool isSorted(int arr[], int n)
{
    if(n==1 || n==0)
    {
        return true;
    }

    if(arr[0] < arr[1] && isSorted(arr+1,n-1))
    {
        return true;
    }
    return false;
}

bool isSortedTwo(int arr[], int n, int i = 0)
{
    if(i == n-1)
    {
        return true;
    }

    if(arr[i] < arr[i+1] && isSortedTwo(arr,n ,i+1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(int);

    cout<<isSortedTwo(arr,n)<<endl;

    return 0;
}


