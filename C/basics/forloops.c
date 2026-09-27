#include <stdio.h>

int main(){

    int arr[]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }

    printf("The sum of the array is %d",sum);

    // factorial problem
    int arr2[]={1,2,3,4,5,6,7,8,9,10};
    int factorial=1;
    for(int i=0;i<10;i++){
        factorial*=arr2[i];
    }
    printf("\nThe factorial of the array is %d",factorial);
    return 0;
}