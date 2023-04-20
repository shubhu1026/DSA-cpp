#include<vector>
using namespace std;

class Heap
{
    vector<int> v;
    bool minHeap;

    void heapify(int i)
    {
        int left = 2i;
        int right = 2i+1;

        bool compare(int a, int b)
        {
            if(minHeap)
                return a < b;
            else
                return a > b;
        }

        int minIdx = i;
        if(left<v.size() && compare(v[left],v[i]))
        {
            minIdx = left;
        }
        if(right<v.size() && compare(v[right],v[minIdx]))
        {
            minIdx = right;
        }

        if(minIdx != i)
        {
            swap(v[i], v[minIdx]);
            heapify(minIdx);
        }
    }

public:
    Heap(int default_size = 10, bool heapType = true)
    {
        v.reserve(default_size+1);
        v.push_back(-1);
        minHeap = heapType;
    }

    void push(int data)
    {
        v.push_back(data);

        int index = v.size() - 1;
        int parent = index/2;

        while(index > 1 && compare(v[index],[parent]))
        {
            swap(v[index], v[parent]);
            index = parent;
            parent = parent/2;
        }
    }

    void top()
    {
        return v[1];
    }

    void pop()
    {
        // 1. Swap first and last element
        int index = v.size() - 1;
        swap(v[index], v[1]);
        v.pop_back();

        heapify(1);
    }

    bool empty()
    {
        return v.size() == 1;
    }
};
