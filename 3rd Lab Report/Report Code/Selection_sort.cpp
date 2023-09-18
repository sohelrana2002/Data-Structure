// SELECTION SORT IN AN ARRAY
#include <iostream>
using namespace std;

int main()
{
    int n, i, min;
    cout << "Enter size of array: ";
    cin >> n;
    int myArray[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }
    for (i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (myArray[j] < myArray[min])
            {
                min = j;
            }
        }

        int temp = myArray[i];
        myArray[i] = myArray[min];
        myArray[min] = temp;
    }
    cout << "Seletion Sort new array: ";
    for (i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
}