/*WAP to read a sorted array. Now search an item and if the item is not found then insert the item into sorted array*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, size, search, loc = -1, pos;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];
    
    cout << "Note: Insert a sorted array";
    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " element: ";
        cin >> myArray[i];
    };

    cout << "\nEnter search item: ";
    cin >> search;

    for (i = 0; i < size; i++)
    {
        if (myArray[i] == search)
        {
            loc = i;
            cout << "Find " << search << " element in position: " << (loc + 1);
        }
        if (myArray[i] < search)
        {
            pos = i + 1;
        }
    }

    if (loc == -1)
    {
        cout << "\nNot found, Now we are insert this element ";
        if (pos <= size)
        {
            for (i = size; i >= pos; i--)
            {
                myArray[i + 1] = myArray[i];
            }
            myArray[pos] = search;

            cout << "\nInsert the item into sorted array. New array: ";
            for (int i = 0; i <= size; i++)
            {
                cout << myArray[i] << " ";
            }
            cout << endl;
        }
    }
}