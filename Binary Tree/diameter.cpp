#include<iostream>
#include<queue>
using namespace std;

//Input: 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1

class Node
{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};

void levelOrderPrint(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* temp = q.front();
        if(temp == NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout<<temp->data<<" ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }
    return;
}

Node* levelOrderBuild()
{
    int d;
    cin>>d;

    Node* root = new Node(d);

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* current = q.front();
        q.pop();

        int c1,c2;
        cin>>c1>>c2;

        if(c1!=-1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }

        if(c2!=-1)
        {
            current->right = new Node(c2);
            q.push(current->right);
        }
    }

    return root;
}

int max(int a, int b)
{
    if(a==b)
    {
        return a;
    }
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a, int b, int c)
{
    return max(max(a,b), c);
}

int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1 + max(h1,h2);
}

int diameter(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }

    int D1 = height(root->left) + height(root->right);
    int D2 = diameter(root->left);
    int D3 = diameter(root->right);

    return max(D1,D2,D3);
}

class HDPair
{
public:
    int height;
    int diameter;
};

HDPair diameterOpt(Node* root)
{
    HDPair p;
    if(root == NULL)
    {
        p.diameter = p.height = 0;
        return p;
    }

    HDPair Left = diameterOpt(root->left);
    HDPair Right = diameterOpt(root->right);

    p.height = max(Left.height, Right.height) + 1;

    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;

    p.diameter = max(D1,D2,D3);
    return p;
}

int main()
{
    Node* root = levelOrderBuild();
    levelOrderPrint(root);

    cout<<"Diameter: "<<diameter(root)<<endl;
    cout<<"Opt Diameter: "<<diameterOpt(root).diameter<<endl;

    return 0;
}


