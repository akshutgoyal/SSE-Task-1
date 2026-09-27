#include <stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int i=0;
    while(i<10){
        if(arr[i]<5){
            i++;
            continue;
        }
        if(arr[i]>10){
            break;
        }
        printf("%d ",arr[i]);
        i++;
    }
}