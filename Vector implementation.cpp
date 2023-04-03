#include<iostream>
#include "Vector.h"

using namespace std;

int main()
{
    Vector<int> vec;

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(3);

    cout<<vec.size()<<endl;
    cout<<vec.capactity()<<endl;

    return 0;
}
