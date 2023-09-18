//Write a program to find out the maximum number in an array
#include <stdio.h>

int main(){
    int n;
    printf("Enter element number of array: ");
    scanf("%d",&n);
    int simpleArray[n];
    for(int i = 0 ; i < n ; i++){
        printf("Enter %d number element of array: ", i+1);
        scanf("%d", &simpleArray[i]);
    }
    //maximum number
    int max = 0;
    int maxIndex = 0;
    int i;
    for(i = 0 ; i < n ; i++){
         if(simpleArray[i] > max){
            max = simpleArray[i];
            maxIndex = i;
         }
    }
        printf("\nMax number is: %d and index number is: %d", max, maxIndex);

    return 0;

}


