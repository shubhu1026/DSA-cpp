#include<iostream>
#include "list.h"

using namespace std;

int main()
{
    List l;
    l.push_front(0);
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(5);
    l.push_back(4);

    l.insert(8, 2);
    l.insert(-1, 0);

    Node* head = l.begin();

    while(head != NULL)
    {
        cout<<head->getData()<<"->";
        head = head->next;
    }
    cout<<endl;

    l.pop_back();

    head = l.begin();

    while(head != NULL)
    {
        cout<<head->getData()<<"->";
        head = head->next;
    }
    cout<<endl;

    return 0;
}
