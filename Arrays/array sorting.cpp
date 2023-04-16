#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5] = {5,67,2,34,6};

    sort(arr, arr+5);

    for(int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<endl;

    int arr2[5] = {5,67,2,34,6};

    sort(arr2, arr2+5, greater<int>());

    for(int i = 0; i < 5; i++)
    {
        cout<<arr2[i]<<endl;
    }

    return 0;
}
