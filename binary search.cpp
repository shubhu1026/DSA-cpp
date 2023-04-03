#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;

int binarySearch(int arr[], int n, int key)
{
    int s = 0, e = n - 1;

    while(s <= e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = { 1, 2, 4, 9, 10, 17, 123, 353};
    int n = sizeof(arr)/sizeof(int);
    sort(arr, arr + n);
    int key = 122223;

    cout<<binarySearch(arr, n, key);

    return 0;
}



