#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
    unordered_set<int> s{1,2,3,8,11,15,0};

    s.insert(111);
    s.erase(11);

    int key = 11;

    if(s.find(key)!= s.end())
    {
        cout<<key<<" is present"<<endl;
    }
    else
    {
        cout<<key<<" not found"<<endl;
    }

    for(auto x : s)
    {
         cout<<x<<", ";
    }
    cout<<endl;

    return 0;
}
