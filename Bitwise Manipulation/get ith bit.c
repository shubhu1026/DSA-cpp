#include<iostream>
using namespace std;

int getIthBit(int n, int pos)
{
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}

int main()
{
    int num = 5;
    int pos;
    cin >> pos;

    cout<< getIthBit(num, pos)<<endl;
}
