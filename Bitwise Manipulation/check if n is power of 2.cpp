#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if((N & (N-1)) == 0)
        cout<<"N is a power 2, N = "<<N<<endl;
    else
        cout<<"N is not a power 2, N = "<<N<<endl;

    return 0;
}
