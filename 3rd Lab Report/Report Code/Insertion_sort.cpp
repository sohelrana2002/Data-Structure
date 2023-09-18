// INSERATION SORT IN AN ARRAY
#include <iostream>
using namespace std;

int main()
{
    int n, i, min, temp;
    cout << "Enter size of array: ";
    cin >> n;
    int myArray[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }
    for (i = 1; i < n; i++)
    {
        temp = myArray[i];
        int j = i - 1;
        while (j >= 0 && myArray[j] > temp)
        {
            myArray[j + 1] = myArray[j];
            j--;
        }
        myArray[j + 1] = temp;
    }
    cout << "Insertion Sort new array: ";
    for (i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }
}