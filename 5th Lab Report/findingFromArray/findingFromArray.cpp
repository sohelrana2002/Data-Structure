#include <iostream>
using namespace std;

int main()
{
    int i, max, min, size;

    cout << "Enter size of the array: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " elements: ";
        cin >> myArray[i];
    }

    max = myArray[0];
    min = myArray[0];

    for (i = 1; i < size; i++)
    {
        if (myArray[i] > max){
            max = myArray[i];
        }

        if (myArray[i] < min){
             min = myArray[i];
        }
           
    }

    cout << "\nMaximum num =" << max <<endl;
    cout << "Minimum num =" << min;

    return 0;
}