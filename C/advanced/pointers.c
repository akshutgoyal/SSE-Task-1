#include <stdio.h>
int main(){
    int n = 5;
    int* pointer_to_n = &n;
    *pointer_to_n += 1;
    printf("The value of n is: %d\n", n);
}