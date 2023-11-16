// Write a program to count the number of duplicate elements.
#include<iostream>
using namespace std;

int main(){
    int i, size, count = 0;;
    cout << "Enter array size: ";
    cin >> size;
    int myArray[size];

    for(i = 0 ; i < size; i++){
        cout << "Enter " << (i+1) << " Element: ";
        cin >> myArray[i];
    }

    for(i = 0; i < size ; i++){

        for(int j = 0; j < i; j++){
            if(myArray[i] == myArray[j]){
                count ++;
                break;
            }
        }

        for(int k = i+1; k < size ; k++){
            if(myArray[i] == myArray[k]){
                count ++;
                break;
            }
        }

    }
    cout << "Total number of duplicate: " << count;
}