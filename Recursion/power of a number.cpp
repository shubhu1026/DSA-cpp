#include<iostream>
using namespace std;

int pow(int a, int n)
{
    if(n==0)
    {
        return 1;
    }

    return a * pow(a, n-1);
}

int fastPow(int a, int n)
{
    if(n==0)
    {
        return 1;
    }

    int subProb = fastPow(a,n/2);
    int subProbSq = subProb * subProb;

    if(n&1)
    {
        return a*subProbSq;
    }
    return subProbSq;
}

int main()
{
    int a,n;
    cin>>a>>n;

    cout<<pow(a,n)<<endl;
    cout<<fastPow(a,n)<<endl;

    return 0;
}
