#include<iostream>
#include<list>
#include<string>
#include<map>
using namespace std;

int main()
{
    map<string, list<string>> phonebook;

    phonebook["Shubhu"].push_back("+91968798117");
    phonebook["Jay"].push_back("+917226886894");
    phonebook["Jay"].push_back("+918469968680");
    phonebook["Sahil"].push_back("+919898121555");
    phonebook["Dad"].push_back("+919904227600");
    phonebook["Mom"].push_back("+919825354564");

    for(auto contact : phonebook)
    {
        cout<<contact.first<<": ";
        for (auto num : contact.second)
        {
            cout << num << ", ";
        }
        cout<<endl;
    }

    return 0;
}
