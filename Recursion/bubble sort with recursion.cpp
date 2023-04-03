#include<iostream>
using namespace std;

bool compare(int a, int b)
{
    return a>b;
}

void bubble_sort_rec(int a[], int n)
{
    if(n==1)
    {
        return;
    }

    for(int j = 0; j < n-1; ++j)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }

    bubble_sort_rec(a,n-1);
}

void bubble_sort_rec_2(int a[], int n, int j = 0)
{
    if(n==1)
    {
        return;
    }

    if(j==n-1)
    {
        bubble_sort_rec_2(a,n-1,0);
        return;
    }

    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    bubble_sort_rec_2(a,n,j+1);
}

int main()
{
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);

    bubble_sort_rec_2(a,n);

    for(int i: a)
    {
        cout<<i<<" ";
    }

    return 0;
}
