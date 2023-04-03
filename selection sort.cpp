#include<iostream>
#include<algorithm>
using namespace std ;

int selectionSort(int arr[], int n)
{
    for(int pos = 0; pos <= n - 2; ++pos)
    {
        int current = arr[pos];
        int minPosition = pos;

        for(int j = pos; j < n; ++j)
        {
            if(arr[j] < arr[minPosition])
            {
                minPosition = j;
            }
        }

        swap(arr[minPosition], arr[pos]);
    }
}

int main()
{
    int arr[] = {1,311,32,2,100,4,9,123,353,2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}



