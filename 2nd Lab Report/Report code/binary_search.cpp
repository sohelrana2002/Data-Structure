// BINARY SEARCH IN AN ARRAY
#include <bits/stdc++.h>
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
    int s = sizeof(myArray) / sizeof(myArray[0]);
    sort(myArray, myArray + s);
    int search;
    cout << "\nEnter element to search: ";
    cin >> search;
    int loc = 0 , beg = 0 , end = n-1;
    int mid = (beg + end)/2;

    while(beg <= end){
        if(myArray[mid] == search){
            loc = mid;
            cout << "index: " << loc << " Search Value: " << search;
            break;
        }else if(search < myArray[mid]){
            end = mid - 1;
        }else if(search > myArray[mid]){
            beg = mid + 1;
        }
        mid = (beg + end)/2;

    }
    if(loc == 0){
        cout << "Result not found";
    }

}

