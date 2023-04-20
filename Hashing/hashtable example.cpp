#include<iostream>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<string, int> menu;

    //Insertion
    menu["maggi"] = 15;
    menu["colddrink"] = 20;
    menu["dosa"] = 99;
    menu["pizza"] = 499;
    menu["burger"] = 149;

    //update query
    menu["dosa"] = (1 + 0.1)*menu["dosa"];

    //deletion
    menu.erase("dosa");

    //Search
    string item;
    cin>>item;

    if(menu.count(item)==0)
    {
        cout<<item<<" is not available"<<endl;
    }
    else
    {
        cout<<item<<" is available and its cost is "<<menu[item]<<endl;
    }

    //iterating over all key-value pairs present in the hashtable
    for(pair<string,int> item : menu)
    {
        cout<<item.first<<" - "<<item.second<<endl;
    }

    return 0;
}
