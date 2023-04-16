#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<int> mq;

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
        cout<< mq.front()<<" ";
        mq.pop();
    }

    return 0;
}
