// Write a program to count the number of unique elements..

#include<iostream>
using namespace std;

int main(){
    int i, size, duplicate, count = 0;
    cout << "Enter array size: ";
    cin >> size;
    int myArray[size];

    for(i = 0 ; i < size; i++){
        cout << "Enter " << (i+1) << " Element: ";
        cin >> myArray[i];
    }

    cout << "Unique element array: ";
    for(i = 0; i < size ; i++){
        duplicate = 0;

        for(int j = 0; j < i; j++){
            if(myArray[i] == myArray[j]){
                duplicate ++;
            }
        }

        for(int k = i+1; k < size ; k++){
            if(myArray[i] == myArray[k]){
                duplicate ++;
            }
        }

        if(duplicate == 0){
            count++;
        }
    }
    cout << "Total unique element: " <<count;
}