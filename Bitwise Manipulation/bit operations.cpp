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

void clearLastIBits(int &n, int i)
{
    int mask = -1 << i;
    n = n & mask;
}

void clearBitsInRange(int& n, int i, int j)
{
    int a = (-1)<<(j+1);
    int b = (1<<i)-1;
    int mask = a|b;
    n = n & mask;
}

int main()
{
    int num = 31;
    int i = 2;
    int j = 6;


    int N = 10000000000;
    int M = 10101;


    //cout<< getIthBit(num, pos)<<endl;

    //clearIthBit(num, pos);
    //clearLastIBits(num, pos);
    clearBitsInRange(num, i, j);

    cout<<num;
}
