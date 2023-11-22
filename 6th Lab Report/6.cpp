#include <iostream>
using namespace std;

void quickSort(int number[20], int first, int last)
{
    int i, j, pivot, temp;

    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (number[i] <= number[pivot] && i < last)
                i++;
            while (number[j] > number[pivot])
                j--;
            if (i < j)
            {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        temp = number[pivot];
        number[pivot] = number[j];
        number[j] = temp;
        quickSort(number,first,j-1);
        quickSort(number, j + 1, last);
    }
}

int main()
{
    int i, count, number[20];
    cout << "Enter elements (<= 20): ";
    cin >> count;
    for (i = 0; i < count; i++)
    {
        cout << "Enter " << (i + 1) << " element: ";
        cin >> number[i];
    }
    quickSort(number, 0, count - 1);
    cout << "The Sorted Order is: ";
    for (i = 0; i < count; i++){
        cout << number[i] << " ";
    }
}