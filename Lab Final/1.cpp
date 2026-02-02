#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

Node *insert(Node *root, int value)
{
    if (root == NULL)
    {
        return new Node(value);
    }
    if (value < root->data)
    {
        root->left = insert(root->left, value);
    }
    else
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}


int main()
{
    Node *root = NULL;

    int size;
    cout << "Enter tree size: ";
    cin >> size;

    int myTree[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << (i + 1) << " tree element: ";
        cin >> myTree[i];
        root = insert(root, myTree[i]);
    }

    // root = insert(root, 20);
    // insert(root, 15);
    // insert(root, 10);
    // insert(root, 17);
    // insert(root, 25);
    // insert(root, 22);
    // insert(root, 30);
    cout << "\nInorder: ";
    inorder(root);
    cout << endl;
    cout << "\nPostorder: ";
    postorder(root);
    cout << endl;
    cout << "\nPreorder: ";
    preorder(root);
    cout << endl;
}