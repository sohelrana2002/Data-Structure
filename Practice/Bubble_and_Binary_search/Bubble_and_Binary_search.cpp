// --------bubble sort in asending order and binarry search-------------
#include <iostream>
using namespace std;

int main()
{
    int i, j, size;
    cout << "Enter array size: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " elememt: ";
        cin >> myArray[i];
    }

    // ----bubble sort(ascending order)-------
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (myArray[j] > myArray[j + 1])
            {
                int temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }

    cout << "\nBubble sort (ascending order): ";
        for (i = 0; i < size; i++)
        {
            cout << " " << myArray[i];
        }

    int beg = 0, end = size - 1, mid = (beg + end) / 2;

    int search, loc = -1;

    cout << "\nEnter search element: ";
    cin >> search;

    while (beg <= end)
    {
        if (myArray[mid] == search)
        {
            loc = mid;
            cout << "Found and location: " << loc;
            break;
        }
        else if (search < myArray[mid])
        {
            end = mid - 1;
        }
        else if (search > myArray[mid])
        {
            beg = mid + 1;
        }
        mid = (beg + end) / 2;
    }

    if (loc == -1)
    {
        cout << "\nSearch not found, Now insert the searching element";

        myArray[size] = search;
        cout << "\nNew array: ";
        for (i = 0; i <= size; i++)
        {
            cout << " " << myArray[i];
        }
    }
}