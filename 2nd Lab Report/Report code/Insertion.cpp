// INSERATION IN AN ARRAY
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
    cout << "\nEnter Insert index in array: ";
    cin >> k;

    int j = n;
    while (j >= k)
    {
        myArray[j + 1] = myArray[j];
        j--;
    }
    int item;
    cout << "Enter insert value: ";
    cin >> item;
    myArray[k] = item;
    n = n + 1;
    cout << "Updated Array: ";
    for (i = 0; i < n; i++)
    {
        cout << " " << myArray[i];
    }
}