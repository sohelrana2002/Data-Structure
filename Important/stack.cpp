#include <iostream>
using namespace std;

const int maxStack = 10;
int top = -1;

int pushOperation(int stk[], int item)
{
    if (top == maxStack - 1)
    {
        cout << "Stack Overflow\n";
        return top;
    }
    top++;
    stk[top] = item;
    return top;
}

int popOperation(int stk[])
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
        return -1;
    }
    int item = stk[top];
    top--;
    return item;
}

void showOperation(int stk[])
{
    // for (int i = top; i >= 0; i--)
    // {
    //     cout << stk[i] << " ";
    // }
    // cout << endl;
    int top2 = top;

    while (top2 != -1)
    {
        cout << stk[top2] << " ";
        top2--;
    }
    cout << endl;
}

int main()
{
    int stk[maxStack];

    bool repeat = true;
    while (repeat)
    {
        cout << "*------- Stack Operations -------*\n";
        cout << "1. Push Element\n"
             << "2. Pop Element\n"
             << "3. Show Elements\n"
             << "4. Exit\n\n"
             << "Select an option: ";

        int select;
        cin >> select;

        switch (select)
        {
        case 1:
        {
            cout << "*--- Push Element ---*\n";
            cout << "How many elements do you want to push into the stack: ";
            int n;
            cin >> n;

            while (n != 0)
            {
                int item;
                cout << "Enter the element: ";
                cin >> item;
                pushOperation(stk, item);
                n--;
            }
            cout << "Added elements: ";
            showOperation(stk);
            break;
        }
        case 2:
        {
            cout << "*--- Pop Element ---*\n";
            int poppedItem = popOperation(stk);
            if (poppedItem != -1)
            {
                cout << "Popped item: " << poppedItem << endl;
            }
            break;
        }
        case 3:
        {
            cout << "*--- Show Elements---*\n";
            showOperation(stk);
            break;
        }
        case 4:
        {
            cout << "Thanks!\n";
            repeat = false;
            break;
        }
        default:
        {
            cout << "Wrong input!\n";
            break;
        }
        }
    }
}