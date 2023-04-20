#include<iostream>

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

bool search(Node* root, int key)
{
    if(root == NULL)
    {
        return false;
    }
    if(root->key == key)
    {
        return true;
    }

    if(key < root->key)
    {
        return search(root->left, key);
    }
    else
    {
        return search(root->right, key);
    }
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

    cout<<"Input key to search: "<<endl;
    int key;
    cin>>key;


    if(search(root, key))
    {
        cout<<key<<" found"<<endl;
    }
    else
    {
        cout<<key<<" not found"<<endl;
    }

    return 0;
}

