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
        cout << "\nEnter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (myArray[j] < myArray[j + 1])
            {
                int temp = myArray[j + 1];
                myArray[j + 1] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    cout << "\nDescending order using bubble sort: ";
    for (i = 0; i < size; i++)
    {
        cout << " " << myArray[i];
    }

    int search;
    cout << "\nEnter search element: ";
    cin >> search;

    int beg = 0, end = size - 1, mid = (beg + end) / 2, loc = -1;

    while (beg <= end)
    {
        if (myArray[mid] == search)
        {
            loc = mid;
            cout << "\nLocation: " << loc;
            break;
        }
        else if (search < myArray[mid])
        {
            beg = mid + 1;
        }
        else if (search > myArray[mid])
        {
            end = mid - 1;
        }

        mid = (beg + end) / 2;
    }

    if (loc == -1)
    {
        cout << "Not found";
    }
}