#include<iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    for(int i = 0; input[i] != '\0'; ++i)
    {
        count++;
    }
    return count;
}

void reverse(char input[])
{
    int s = 0;
    int e = length(input) - 1;

    while(s<e)
    {
        swap(input[s], input[e]);
        s++;
        e--;
    }
}

int  main()
{
    char arr[30];
    cout<<"Enter string: ";
    cin.getline(arr,30);

    reverse(arr);
    cout<<"reversed string: " << arr;
    return 0;
}
