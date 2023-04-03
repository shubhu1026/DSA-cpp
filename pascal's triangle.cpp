#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascal(int n)
{
    // your code goes here
    vector<vector<int>> vec;

        for(int i = 0; i < n; ++i)
        {
            vector<int> vec2 = {1};
            for(int j = 0; j < i; ++j)
            {
                if(j == i - 1)
                    vec2.push_back(1);
                else
                    vec2.push_back(vec[i-1][j] + vec[i-1][j+1]);
            }

            vec.push_back(vec2);
        }

    return vec;
}

int main()
{
    int n = 5;
    vector<vector<int>> vec;
    vec = printPascal(n);

    for(auto i : vec)
    {
        for(auto j : i)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
