#include <stdio.h>

int pointref(int *ptr) {
    *ptr += 1;
    return *ptr;
}
int main(){
    int n = 5;
    int* pointer_to_n = &n;
    pointref(pointer_to_n);
    printf("The value of n is: %d\n", n);
}