// DELETION IN AN ARRAY
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int myArray[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }
    cout << "Old Array: ";
    for (i = 0; i < n; i++)
    {
        cout << " " << myArray[i];
    }

    int k;
    cout << "\nEnter deletion index in array: ";
    cin >> k;
    int item = myArray[k];
    for (int j = k; j < n; j++)
    {
        myArray[j] = myArray[j + 1];
    }
    n = n - 1;
    cout << "Updated Array: ";
    for (i = 0; i < n; i++)
    {
        cout << " " << myArray[i];
    }
}