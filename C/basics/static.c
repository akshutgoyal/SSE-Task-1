#include <stdio.h>

int sum(int num){
    static int sum=0;
    sum += num;
    return sum;
}

int main(){
    int num,n;
    printf("Enter number of repetitions: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter a number: ");
        scanf("%d",&num);
        sum(num);
    }
    printf("The sum is %d",sum(0)); // calling sum with 0 to get the final sum without adding anything
    return 0;
}