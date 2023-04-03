#include<bits/stdc++.h>
#include<map>
using namespace std ;

int linearSearch(int arr[], int n, int key)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = { 1, 2, 4, 9, 10, 17, 123, 353};
    int n = sizeof(arr)/sizeof(int);
    int key = 10;

    cout<<linearSearch(arr, n, key);

    return 0;
}


