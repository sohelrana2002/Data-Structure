// Write a program to count the number of duplicate elements.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int myArray[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter" << (i+1) << " element: ";
        cin >> myArray[i];
    }

    int count = 0;

    for (int i = 0; i < size - 1; i++)
    {
        bool isDuplicate = false;
        for (int j = i + 1; j < size; j++)
        {
            if (myArray[i] == myArray[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate)
        {
            count++;
            while (i < size - 1 && myArray[i] == myArray[i + 1])
            {
                i++;
            }
        }
    }

    cout << "Total Duplicate number: " << count << endl;
}