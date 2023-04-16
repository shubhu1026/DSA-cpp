#include<iostream>
using namespace std;

int gridWays(int i, int j, int m, int n)
{
    if(i == m-1 && j == n-1)
    {
        return 1;
    }

    if(j >= n || i >= m)
    {
        return 0;
    }

    int ans = gridWays(i+1,j,m,n) + gridWays(i,j+1,m,n);
    return ans;
}

int main()
{
    int m,n;
    cin>>m>>n;

    cout<<gridWays(0,0,m,n);
    return 0;
}
