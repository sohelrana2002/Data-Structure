//Write a program to traverse an array
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
    for(int i = 0 ; i < n ; i++){
         printf("\n%d number element is: %d", i+1, simpleArray[i]);
    }

    return 0;

}
