#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

void createNode(Node **head_ref, int value)
{
    Node *new_node = new Node(value);
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node *prev_node, int value)
{
    // if (prev_node == NULL)
    // {
    //     cout << "The given previous node cannot be NULL";
    //     return;
    // }

    Node *new_node = new Node(value);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void deleteAfter(Node *prev_node)
{
    if (prev_node == NULL || prev_node->next == NULL)
    {
        cout << "The given node is NULL or the next node doesn't exist";
        return;
    }

    Node *temp = prev_node->next;
    prev_node->next = temp->next;
    delete temp;
}

Node *findNode(Node *node, int value)
{
    while (node != NULL)
    {
        if (node->data == value)
            return node;
        node = node->next;
    }
    return NULL;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    createNode(&head, 2);
    createNode(&head, 3);
    createNode(&head, 4);
    createNode(&head, 5);
    createNode(&head, 6);

    cout << "Created Linked list is:";
    printList(head);

    int value;
    cout << "Enter the value of the existing node after which you want to insert a new node: ";
    cin >> value;

    Node *foundNode = findNode(head, value);
    if (foundNode == NULL)
    {
        cout << "Node with value " << value << " not found in the list\n";
    }
    else
    {
        int newValue;
        cout << "Enter the value of the new node to insert: ";
        cin >> newValue;
        insertAfter(foundNode, newValue);

        cout << "After inserting " << newValue << " after " << value << ":";
        printList(head);
    }

    int value2;
    cout << "Enter the value of the existing node after which you want to delete the next node: ";
    cin >> value2;

    Node *foundNode2 = findNode(head, value2);
    if (foundNode2 == NULL || foundNode2->next == NULL)
    {
        cout << "Node with value " << value2 << " not found or no node to delete after it\n";
    }
    else
    {
        deleteAfter(foundNode2);

        cout << "After deleting node after " << value2 << ":";
        printList(head);
    }

    return 0;
}

// // C++ program to show inserting a node
// // after a given node in given Linked List
// #include <bits/stdc++.h>
// using namespace std;

// // A linked list node
// class Node
// {
// public:
//     int data;
//     Node *next;
// };

// // Given a node prev_node, insert a new
// // node after the given prev_node
// void insertAfter(Node *prev_node, int value)
// {
//     // 1. check if the given prev_node
//     // is NULL
//     if (prev_node == NULL)
//     {
//         cout << "The given previous node cannot be NULL";
//         return;
//     }

//     // 2. allocate new node
//     Node *new_node = new Node();

//     // 3. put in the data
//     new_node->data = new_data;

//     // 4. Make next of new node
//     // as next of prev_node
//     new_node->next = prev_node->next;

//     // 5. move the next of prev_node
//     // as new_node
//     prev_node->next = new_node;
// }

// // Function to insert element in LL
// void push(Node **head_ref, int new_data)
// {
//     Node *new_node = new Node();
//     new_node->data = new_data;
//     new_node->next = (*head_ref);
//     (*head_ref) = new_node;
// }

// // This function prints contents of
// // linked list starting from head
// void printList(Node *node)
// {
//     while (node != NULL)
//     {
//         cout << " " << node->data;
//         node = node->next;
//     }
//     cout << "\n";
// }

// // Driver code
// int main()
// {
//     // Start with the empty list
//     Node *head = NULL;

//     push(&head, 6);
//     push(&head, 5);
//     push(&head, 4);
//     push(&head, 3);
//     push(&head, 2);

//     cout << "Created Linked list is: ";
//     printList(head);

//     // Insert 1 at the beginning.
//     insertAfter(head, 1);

//     cout << "After inserting 1 after 2: ";
//     printList(head);

//     return 0;
// }