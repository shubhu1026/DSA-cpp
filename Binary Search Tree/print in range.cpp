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

Node* findMin(Node* root)
{
    while(root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

Node* remove(Node* root, int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    else if(key < root->key)
    {
        root->left = remove(root->left, key);
    }
    else if(key > root->key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        //case 1: no children
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        //case 2: single child
        else if(root->left == NULL && root->right != NULL)
        {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->left != NULL && root->right == NULL)
        {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        //case 3: double children
        else
        {
            Node* temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }

        return root;
    }
}

void printRange(Node* root, int k1, int k2)
{
    if(root == NULL)
    {
        return;
    }

    if(root->key >= k1 && root->key <= k2)
    {
        printRange(root->left, k1, k2);
        cout<<root->key<< " ";
        printRange(root->right, k1, k2);
    }
    else if(root->key > k2)
    {
        printRange(root->left, k1, k2);
    }
    else
    {
        printRange(root->right, k1, k2);
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
    cout<<endl;
    printRange(root, 5,12);

    return 0;
}

