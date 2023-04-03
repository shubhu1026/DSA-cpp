#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

void countingSort(int arr[], int n)
{
    int largest = INT_MIN;

    for(int i = 0; i < n; ++i)
    {
        largest = max(largest, arr[i]);
    }

    //int *freq = new int[largest + 1];
    vector<int> freq(largest + 1, 0);

    for(int i = 0; i < n; ++i)
    {
        freq[arr[i]]++;
    }

    int j = 0;
    for(int i = 0; i <= largest; ++i)
    {
        while(freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
}

int main()
{
    int arr[] = {1,311,32,2,100,4,9,123,353,2};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}




