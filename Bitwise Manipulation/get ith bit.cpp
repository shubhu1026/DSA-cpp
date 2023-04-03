#include<iostream>
using namespace std;

int getIthBit(int n, int i)
{
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int& n, int i)
{
    int mask = (1<<i);
    n = (n|mask);
}

void clearIthBit(int& n, int i)
{
    int mask = ~(1<<i);
    n = (n & mask);
}

void updateIthBit(int& n, int i, int val)
{
    clearIthBit(n,i);
    int mask = (val<<i);
    n = n | mask;
}

int main()
{
    int num = 13;
    int pos;
    cin >> pos;

    //cout<< getIthBit(num, pos)<<endl;

    //clearIthBit(num, pos);
    updateIthBit(num, pos, 1);

    cout<<num;
}
