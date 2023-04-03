#include<iostream>
#include<algorithm>
using namespace std ;

int printSumOfSubarrayAndFindLargestSum(int arr[], int n)
{
    int largestSum = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            int sum = 0;

            for(int k = i; k <= j; ++k)
            {
                sum += arr[k];
            }

            if(sum > largestSum)
                largestSum = sum;

            cout<<sum<<endl;
        }
    }

    cout<<endl<<"Largest sum = " << largestSum<<endl;

}

int optimizedWwithPrefixArray(int arr[], int n)
{
    int prefix[n+1] = {0};
    prefix[0] = arr[0];
    for(int i = 1; i<n ; ++i)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largestSum = 0;
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            int sum = (i>0)? prefix[j] - prefix[i-1] : prefix[j];

            if(sum > largestSum)
                largestSum = sum;

            cout<<sum<<endl;
        }
    }

    cout<<endl<<"Largest sum = "<<largestSum<<endl;
}

int max(int m, int n)
{
    if(m>n)
        return m;
    else
        return n;
}

//kadane's algorithm
int maximumSubarraySum(int arr[], int n)
{
    int cs = 0;
    int largest = 0;

    for(int i = 0; i < n; ++i)
    {
        cs = cs + arr[i];
        if(cs < 0)
        {
            cs = 0;
        }

        largest = max(largest, cs);
    }

    return largest;
}

int main()
{
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    //cout<<printSumOfSubarrayAndFindLargestSum(arr, n)<<endl;
    //cout<<optimizedWwithPrefixArray(arr, n)<<endl;
    cout<<maximumSubarraySum(arr, n)<<endl;

    return 0;
}
