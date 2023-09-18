// LINEAR SEARCH IN AN ARRAY
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int myArray[n];
    int i;
    for(i = 0 ; i < n ; i++){
        cout << "Enter " << (i + 1) << " element: ";
        cin >> myArray[i];
    }
    //searching number
    int search;
    int find = 0;
    cout << "\nEnter element to search: ";
    cin >> search;
    
    for(i = 0 ; i < n ; i++){
         if(myArray[i] == search){
            find = 1;
            break;
         }
    }
    if(find == 1){
        cout << "\nResult found in index: " <<  i  << " and number is: " << search;
    }
    else{
         cout << "\nResult not found";
    }

    return 0;

}

