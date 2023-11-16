// Write a program to print all negative elements in an array.

#include<iostream>
using namespace std;

int main(){
    int i, size, count;
    cout << "Enter array size: ";
    cin >> size;
    int myArray[size];

    for(i = 0 ; i < size; i++){
        cout << "Enter " << (i+1) << " Element: ";
        cin >> myArray[i];
    }
    cout << "Negative element array: ";
    for(i = 0; i < size; i++){
        if(myArray[i] < 0){
            cout << myArray[i] << " ";
        }
    }
}