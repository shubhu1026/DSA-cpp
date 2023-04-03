#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char name[20];
    char name2[20];
    cout<<"Enter your name: "<<endl;
    cin.getline(name, 20);
    cout<<"Enter your friend's name: "<<endl;
    cin.getline(name2, 20);

    if(strcmp(name, name2)== 0)
        cout<<"Names are equal\n";
    else
        cout<<"Names are not equal";

    cout<<"Length of your name = "<< strlen(name);
    return 0;
}
