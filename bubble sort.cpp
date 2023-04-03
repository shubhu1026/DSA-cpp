#include<iostream>
#include<algorithm>
using namespace std ;

int bubbleSort(int arr[], int n)
{
    for(int times = 1; times <= n - 1; ++times)
    {
        for(int j = 0; j <= n - times - 1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {1,311,32,2,100,4,9,123,353,2};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}



