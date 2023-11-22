//Write a program to print all unique elements in the array.

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

    cout << "Unique element array: ";
    for(i = 0; i < size ; i++){
        count = 0;

        for(int j = 0; j < i; j++){
            if(myArray[i] == myArray[j]){
                count ++;
            }
        }

        for(int k = i+1; k < size ; k++){
            if(myArray[i] == myArray[k]){
                count ++;
            }
        }

        if(count == 0){
            cout << myArray[i] << ", ";
        }
    }
    cout <<endl;
}