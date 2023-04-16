#include<iostream>
#include<algorithm>

using namespace std;

int findMissingNumber(int A[], int sizeOfArray) {
    //implement your code here
    sort(A, A + sizeOfArray);
    int comparator = sizeOfArray;

    for(int i = sizeOfArray-1; i >= 0; --i)
    {
        if(comparator != A[i])
        {
            return comparator;
        }
        comparator--;
    }
}

int main()
{
    int arr[5] = {3, 2, 5, 1};
    int n = sizeof(arr) / sizeof(int);

    cout << findMissingNumber(arr, n);

    return 0;
}
