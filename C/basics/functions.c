#include <stdio.h>

void print_big(int x);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    print_big(num);
    return 0;
}

void print_big(int x){
    if(x>10){
        printf("%d is big\n",x);
    }
}