#include<iostream>
#include "hashtable.h"

using namespace std;

int main()
{
    HashTable<int> h;
    h.insert("Mango",100);
    h.insert("Apple",120);
    h.insert("Banana",140);
    h.insert("Orange",160);
    h.insert("Kiwi",200);
    h.insert("Jack fruit",260);
    h.insert("Dragon fruit",450);
    h.insert("Blueberry",260);
    h.insert("Pineapple", 280);
    h.insert("Strawberry",180);
    h.insert("Guava",240);

    /*
    string fruit;
    cin>>fruit;

    int *price = h.search(fruit);
    if(price!=NULL)
    {
        cout<<"Price of fruit is: "<<*price<<endl;
    }
    else
    {
        cout<<"Fruit not present"<<endl;
    }
    */

    //h.erase("Orange");
    //h.print();
    h["newFruit"] = 200;
    cout<<"Cost of new fruit: "<<h["newFruit"]<<endl;

    h["newFruit"] += 20;
    cout<<"Updated cost of new fruit: "<<h["newFruit"]<<endl;


    return 0;
}
