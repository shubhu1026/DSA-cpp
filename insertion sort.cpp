#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int insertionSort(int arr[], int n)
{
    for(int i = 1; i <= n-1; ++i)
    {
        int current = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }

        arr[prev + 1] = current;
    }
}

void plusOne(vector<int> digits)
    {
        vector<int> vec;
        int n = digits.size();

        for(int x : digits)
        {
            vec.push_back(x);
        }

        for(int i = n-1; i >= 0; --i)
        {
            if(vec[i] == 9)
            {
                vec[i] = 0;
                vec[i-1] += 1;
            }
            else
            {
                vec[i] += 1;
                break;
            }
        }

        for(int x: vec)
        {
            cout<<x<<", ";
        }
        cout<<endl;
    }

int main()
{
    int arr[] = {1,311,32,2,100,4,9,123,353,2};
    vector<int> arr2 = {1,2,2};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);

    vector<int> vec2;



    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    plusOne(arr2);

    return 0;
}



