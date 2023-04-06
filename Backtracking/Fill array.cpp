#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr, int n)
{
    for(int j = 0; j < n; ++j)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}

void fillArray(vector<int> &arr, int i, int n, int val)
{
    if(i==n)
    {
        printArray(arr,n);
        return;
    }

    arr[i] = val;
    fillArray(arr,i+1,n,val+1);
    arr[i] = arr[i] * -1;
}

int main()
{
    vector<int> arr(100,0);
    int n;
    cin>>n;

    fillArray(arr, 0, n, 1);
    printArray(arr,n);
    return 0;
}
