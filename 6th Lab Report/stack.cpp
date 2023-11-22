#include <bits/stdc++.h>
using namespace std;

int top = -1;
#define size 5
int myArray[size];
void pushFunction();
void showFunction();
void mainFunction();

int main()
{
    mainFunction();
}

void pushFunction()
{
    system("cls");
    int value;
    if (top == size - 1)
    {
        cout << "Stack is overflow";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
    else
    {
        top = top + 1;
        cout << "\nEnter " << top << " index element: ";
        cin >> value;
        myArray[top] = value;
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
}

void showFunction()
{
    system("cls");
    if (top == -1)
    {
        cout << "Stack is overflow";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
    cout <<"Reverse Order: ";
    while (top >= 0)
    {
        cout << myArray[top] << " ";
        top--;
    }
    cout << "\nPress any key to continue";
    fflush(stdin);
    getchar();
    main();
}

void mainFunction()
{
    system("cls");
    int choice;
    cout << "1. Insert element (Push)" << endl;
    cout << "2. Show Function" << endl;
    cout << "Choice your option: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        pushFunction();
        break;

    case 2:
        showFunction();
        break;

    default:
        cout << "Something went wrong";
        cout << "\nPress any key to continue";
        fflush(stdin);
        getchar();
        main();
    }
}