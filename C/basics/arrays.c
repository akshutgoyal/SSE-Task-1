#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[10];

    printf("Enter 10 numbers:");
    for(int i=0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe values are: ");
    for(int i=0;i<=9;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}