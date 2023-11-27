/*WAP to search an element in an array using linear searching algorithm. If found then print the element with its position and if the element is not found then print search unsuccesful.*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, size, search, loc = -1;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " element: ";
        cin >> myArray[i];
    };

    cout << "\nEnter search item: ";
    cin >> search;

    for (i = 0; i < size; i++)
    {
        if (myArray[i] == search)
        {
            loc = i;
            cout << "Find " << search << " element in position: " << (loc + 1);
        }
    }

    if (loc == -1)
    {
        cout << "Search is unsuccessful ";
        myArray[size] = search;
    }
}