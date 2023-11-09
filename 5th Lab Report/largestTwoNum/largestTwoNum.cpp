#include <iostream>
using namespace std;
 
int main()
{
    int size, i, largest = 0, second_largest = 0, pos1, pos2;
    cout << "Enter size of the array: ";
    cin >> size;
    int myArray[size];
    for (i = 0; i < size; i++)
    {
        cout << "Enter " << (i + 1) << " Element :" <<endl;
        cin >> myArray[i];
    }

    for (i = 0; i < size; i++)
    {
        if (myArray[i] > largest)
        {
            largest = myArray[i];
            pos1 = i;
        }
    }
    for (i = 0; i < size; i++)
    {
        if (myArray[i] > second_largest)
        {
            if (myArray[i] == largest) continue; 
            second_largest = myArray[i];
            pos2 = i;
        }
    }
    cout << "\nLargest Number :" << largest << " at position " << (pos1 + 1);
    cout << "\nSecond Largest Number :" << second_largest << " at position " << (pos2 + 1);
 
    return 0;
}