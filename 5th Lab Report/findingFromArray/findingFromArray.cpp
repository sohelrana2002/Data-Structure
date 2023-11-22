#include <iostream>
using namespace std;

int main()
{
    int i, max, min, size, flag = 0;
    char CharCharArry;
    char search;

    cout << "Enter size of the array: ";
    cin >> size;
    int myArray[size];
    char CharArry[size];

    for (int i = 0; i < size; i++)
    {

        cout << "Enter " << (i+1) << " Element(Matching Character): ";
        cin >> CharArry[i];
    }
    cout << "Search Element:";
    cin >> search;
    for (int i = 0; i < size; i++)
    {

        if (search == CharArry[i])
        {
            cout << "Element is found in position " << (i+1);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Element is not found";
    }

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " elements(Max and Min): ";
        cin >> myArray[i];
    }

    max = myArray[0];
    min = myArray[0];

    for (i = 1; i < size; i++)
    {
        if (myArray[i] > max)
        {
            max = myArray[i];
        }

        if (myArray[i] < min)
        {
            min = myArray[i];
        }
    }

    cout << "\nMaximum num =" << max << endl;
    cout << "Minimum num =" << min;

    return 0;
}