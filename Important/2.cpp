#include <iostream>
using namespace std;

int main()
{
    int i, size;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }

    // -------bubble sort (descending order)----------
    for (i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (myArray[j] < myArray[j + 1])
            {
                int temp = myArray[j];
                myArray[j] = myArray[j + 1];
                myArray[j + 1] = temp;
            }
        }
    }

    cout << "\nBubble sort (descending order): ";
    for (i = 0; i < size; i++)
    {
        cout << " " << myArray[i];
    }

    int search;
    cout << "\nEnter search item: ";
    cin >> search;

    int beg = 0, end = size - 1, mid = (beg + end) / 2, loc = 0;

    while (beg <= end)
    {
        if (myArray[mid] == search)
        {
            loc = mid;
            cout << "Location: " << loc;
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
    // if (loc == -1)
    // {
    //     cout << "Search not found";
    // }
}