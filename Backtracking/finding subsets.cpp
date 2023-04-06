#include<iostream>
using namespace std;

void findSubsets(char *input, char *output, int i, int j)
{
    //base case
    if(input[i]=='\0')
    {
        output[j] = '\0';
        if(output[0]=='\0')
        {
            cout<<"NULL"<<endl;
        }
        else
        {
            cout<<output<<endl;
        }
        return;
    }

    //recursive case

    //1. include ith char
    output[j] = input[i];
    findSubsets(input, output, i+1, j+1);
    //2. exclude ith char
    findSubsets(input, output, i+1, j);
}

int main()
{
    char input[100];
    char output[100];
    cin.getline(input,100);

    findSubsets(input,output,0,0);
    return 0;
}

