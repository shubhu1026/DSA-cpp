#include<iostream>
#include<vector>
using namespace std;

class Node
{
public:
    int key;
    Node* left;
    Node* right;

    Node(int data)
    {
        key = data;
        left = right = NULL;
    }
};

Node* insert(Node* root, int key)
{
    if(root == NULL)
    {
        return new Node(key);
    }

    //rec case
    if(key <= root->key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }

    return root;
}

void printInorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    printInorder(root->left);
    cout<<root->key<<" ";
    printInorder(root->right);
}

void printRoot2LeafPaths(Node* root, vector<int> &path)
{
    if(root == NULL)
    {
        return;
    }

    if(root->left == NULL && root->right == NULL)
    {
        for(int node: path)
        {
            cout<<node<<"->";
        }
        cout<<root->key<<"->";
        cout<<endl;
        return;
    }

    //rec case
    path.push_back(root->key);
    printRoot2LeafPaths(root->left, path);
    printRoot2LeafPaths(root->right, path);

    //backtracking
    path.pop_back();
    return;
}

int main()
{
    Node* root = NULL;
    int arr[] = {8,3,10,1,6,14,4,7,13};

    for(int x : arr)
    {
        root = insert(root,x);
    }

    printInorder(root);
    cout<<endl;

    vector<int> path;

    printRoot2LeafPaths(root, path);

    return 0;
}

