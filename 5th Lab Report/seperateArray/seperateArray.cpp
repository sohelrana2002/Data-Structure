#include <iostream>
using namespace std;

int main()
{
    int i, even = 0, odd = 0, size;

    cout << "Enter size of the array: ";
    cin >> size;
    int myArray[size];
    int evenArray[size];
    int oddArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " elements: ";
        cin >> myArray[i];
    }

    for (i = 0; i < size; i++)
    {
        if (myArray[i] % 2 == 0){
            evenArray[even] = myArray[i];
            even++;
        }else{
            oddArray[odd] = myArray[i];
            odd++;
        }
           
    }
    cout << "Even Array: ";
    for (i = 0; i < even; i++)
    {
        cout << evenArray[i] << " ";
           
    }
    cout << "Odd Array: ";
    for (i = 0; i < odd; i++)
    {
        cout << oddArray[i] << " ";
    }

    return 0;
}