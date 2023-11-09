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

    for (i = 0; i < size; i++)
    {
        if (myArray[i] % 2 == 0){
           even++;
        }else{
            odd++;
        }
           
    }

    cout << even <<endl;
    cout << odd;

    return 0;
}