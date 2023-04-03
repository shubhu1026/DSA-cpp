#include<iostream>
using namespace std;


//O(log N) complexity;
int countSetBits(int n)
{
    int count = 0;

    while(n > 0)
    {
        int last_bit = (n & 1);
        count += last_bit;
        n = n>>1;
    }
    return count;
}

int count_bits_hack(int n)
{
    int count = 0;

    while(n > 0)
    {
        n = n & n-1;
        count++;
    }
    return count;
}

int main()
{
    int N;
    cin >> N;

    cout<<count_bits_hack(N);

    return 0;
}

