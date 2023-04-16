
class node
{
public:
    int data;
    node* next;

    node(int d)
    {
        data = d;
    }
};

class Queue
{
    node* front = NULL;
    node* rear = NULL;

public:

    bool empty()
    {
        return front == NULL;
    }

    void push(int data)
    {
        node* temp = new node(data);

        if (rear == NULL) {
            front = rear = temp;
            return;
        }

        rear->next = temp;
        rear = temp;
    }

    void pop()
    {
        if (front == NULL)
            return;

        node* temp = front;
        front = front->next;

        if (front == NULL)
            rear = NULL;

        delete (temp);
    }

    int getFront()
    {
        return front->data;
    }
};
