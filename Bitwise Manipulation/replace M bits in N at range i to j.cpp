#include<iostream>
using namespace std;

void clearBitsInRange(int& n, int i, int j)
{
    int a = (-1)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n & mask;
}

void replaceBits(int& n, int i, int j, int m)
{
    clearBitsInRange(n, i, j);
    int mask = (m<<i);
    n = n | mask;
}

int main()
{
    int N = 15;
    int M = 2;
    int i = 1;
    int j = 3;

    replaceBits(N, i, j, M);

    cout<<N;
    return 0;
}
