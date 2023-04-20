#include<iostream>
#include "list.h"
#include<unordered_map>

using namespace std;

bool containsCycle(Node* head)
{
    unordered_map<Node*, bool> hashtable;

    Node* temp = head;
    while(temp!=NULL)
    {
        if(hashtable.count(temp) != 0)
        {
            return true;
        }

        hashtable[temp] = true;
        temp = temp->next;
    }

    return false;
}

int main()
{
    List list;
    list.push_front(1);
    list.push_front(2);
    list.push_front(3);
    list.push_front(4);
    list.push_front(5);
    list.push_front(7);
    list.push_front(6);

    // Node* temp = list.begin()->next->next->next->next;
    //temp->next = list.begin()->next;

    if(containsCycle(list.begin()))
    {
        cout<<"Cycle found"<<endl;
    }
    else
    {
        cout<<"Cycle not found"<<endl;
    }

    return 0;
}
