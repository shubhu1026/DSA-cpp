#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        int r;
        if(i%2 == 0)
        {
            r = 2;
        }
        else
        {
            r = 1;
        }

        for(int j = 1; j <= i; ++j)
        {
            if(r % 2 == 0)
                cout<<0;
            else
                cout<<1;

            r++;
        }
        cout<<endl;
    }

    return 0;
}

