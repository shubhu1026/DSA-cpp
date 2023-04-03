#include<iostream>
using namespace std;


//O(log N) complexity;
int dec2binary(int n)
{
    int ans = 0;
    int power = 1;

    while(n > 0)
    {
        int last_bit = (n&1);
        ans += power * last_bit;

        power = 10 * power;
        n = n >> 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout<<dec2binary(n);

    return 0;
}
