#include <iostream>
using namespace std;

int main()
{
    int i, even = 0, odd = 0, size;

    cout << "Enter size of the array: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " elements: ";
        cin >> myArray[i];
    }
    cout << "Previous Array: ";
    for (i = 0; i < size; i++)
    {   
        cout << myArray[i] << " ";
    }
    for (i = 0; i < size; i++)
    {
        if(i == 0){
            cout << "\nEnter " << (i + 1) << " elements: ";
            cin >> myArray[i];
        }
        if(i == (size -1)){
            cout << "\nEnter " << (i + 1) << " elements: ";
            cin >> myArray[size -1];
        }
    }

    cout << "New Array: ";
    for (i = 0; i < size; i++)
    {   
        cout << myArray[i] <<" ";
    }

    return 0;
}