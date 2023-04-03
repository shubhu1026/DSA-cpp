#include<iostream>
using namespace std;

void reverse(const char& input[])
{
    int s = 0;
    int e = input.size() - 2;

    while(s<e)
    {
        swap(s,e);
        s++;
        e--;
    }
}

int  main()
{
    char arr[30];
    cout<<"Enter string";
    cin.getline(arr,30);

    reverse(arr);

    cout<<"reversed string: " << arr;
    return 0;
}
