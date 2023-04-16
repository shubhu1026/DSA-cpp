#include<iostream>
//#include "queues_array.h"
#include "queue LL.h"

using namespace std;

int main()
{
    Queue mq;

    mq.push(1);
    mq.push(2);
    mq.push(3);
    mq.push(4);
    mq.push(5);
    mq.push(6);

    mq.pop();
    mq.pop();

    mq.push(7);

    while(!mq.empty())
    {
        cout<< mq.getFront()<<" ";
        mq.pop();
    }

    return 0;
}
