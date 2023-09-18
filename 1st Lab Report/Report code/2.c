//Write a program to search on item an array
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
    //searching number
    int search;
    int find = 0;
    printf("\nEnter element to search: ");
    scanf("%d", &search);
    int i;
    for(i = 0 ; i < n ; i++){
         if(simpleArray[i] == search){
            find = 1;
            break;
         }
    }
    if(find == 1){
        printf("\nResult found on index number %d and number is: %d", i, search);
    }
    else{
        printf("\nResult not found");
    }

    return 0;

}

