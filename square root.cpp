#include<iostream>

using namespace std;

int squareRoot(int n)
{
    int i = 1;

    if(n == 1)
        return 1;

    while(i <= n/2)
    {
        if(i * i == n)
            return i;

        i++;
    }
    return -1;
}

int main()
{
    cout<<squareRoot(25);
    return 0;
}
