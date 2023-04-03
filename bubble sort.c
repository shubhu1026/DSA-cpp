#include<iostream>
#include<algorithm>
using namespace std ;

int bubbleSort(int arr[], int n)
{
    for(int times = 1; time<= times - 1; ++times)
    {
        for(int j = 0; j <= n - times - 1; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = { 1, 2, 4, 9, 10, 17, 123, 353};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}



