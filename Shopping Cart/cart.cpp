#include<iostream>
#include "datamodel.h"

int main()
{
    Product p(1,"apple", 10);
    cout<<p.getDisplayName();

    Item fruit(p, 3);
    cout<<fruit.getItemInfo();

    return 0;
}
