#include<iostream>
#include<cstring>

using namespace std;

void printAllPrefixes(char input[])
{
    for(int i = 0; i < strlen(input); ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            cout<<input[j];
        }
        cout<<endl;
    }
}

int main()
{
    char str[20];
    cout<<"Enter string: ";
    cin.getline(str,20);

    printAllPrefixes(str);

    return 0;
}
