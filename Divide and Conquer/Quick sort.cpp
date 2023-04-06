#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int s, int e)
{
    int pivot = arr[e];
    int i = s-1;

    for(int j=s; j<e; ++j)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[e]);
    return i+1;
}

void quickSort(vector<int> &arr, int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main()
{
    vector<int> arr{10,5,2,0,7,6,4};
    int s=0;
    int e=arr.size()-1;
    quickSort(arr,s,e);

    for(int i : arr)
    {
        cout<<i<<" ";
    }
    return 0;
}

