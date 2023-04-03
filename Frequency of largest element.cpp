#include<bits/stdc++.h>
#include<algorithm>
using namespace std ;

int frequencyOfLargestElement (vector<int> A)
{
    int n = A.size();
    int largestElement = A[n-1];
    int count = 0;

    for(int i = n - 1; i >= 0; i--)
    {
        if(A[i] == largestElement)
        {
            count++;
        }
        else
        {
            return count;
        }
    }
}

int main()
{
    vector<int> vec = {1,2,3,3,4,4,4,4};
    vector<int> vec2 = {1,2,3,7,7,7,7,7};

    cout<<frequencyOfLargestElement(vec)<<endl;
    cout<<frequencyOfLargestElement(vec2)<<endl;

    return 0;
}
