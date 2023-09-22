// BUBBLE SORT IN AN ARRAY
#include <iostream>
using namespace std;

int main()
{
    int n, i;
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
        for (int j = 0; j < n - 1; j++)
        {
            if (myArray[j] < myArray[j + 1])
            {
                int temp = myArray[j + 1];
                myArray[j + 1] = myArray[j];
                myArray[j] = temp;
            }
        }
    }
    cout << "Bubble Sort new array: ";
    for (i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
}