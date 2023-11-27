/*WAP to sort data element(descending order) in an array. Now search and item using binary search algorithm . If item found then show a message "Search is successful. If not then print "Item isn't found"*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, size, search;
    cout << "Enter size of an array: ";
    cin >> size;
    int myArray[size];

    for (i = 0; i < size; i++)
    {
        cout << "\nEnter " << (i + 1) << " element: ";
        cin >> myArray[i];
    };

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            if (myArray[j] < myArray[j + 1])
            {
                int temp = myArray[j + 1];
                myArray[j + 1] = myArray[j];
                myArray[j] = temp;
            }
        }
    }

    cout << "Descending order: ";
    for (i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }

    cout << "\nEnter search item: ";
    cin >> search;

    int loc = -1 , beg = 0 , end = size-1;
    int mid = (beg + end)/2;

    while(beg <= end){
        if(myArray[mid] == search){
            loc = mid;
            cout << "index: " << loc << " Search Value: " << search;
            break;
        }else if(myArray[mid] < search){
            end = mid - 1;
        }else if( myArray[mid] > search){
            beg = mid + 1;
        }
        mid = (beg + end)/2;

    }
    if(loc == -1){
        cout << "Result not found";
    }
}