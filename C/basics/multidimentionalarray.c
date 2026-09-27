#include <stdio.h>
#include <stdlib.h>

int main(){

    char multiar[2][4]={
        {'a','b','c','d'},
        {'A','B','C','D'}
    };

    for(int i=0;i<4;i++){
        printf("%c %c\n",multiar[0][i],multiar[1][i]);
    }

    printf("\nMethod 2:\n");

    for(int i=0;i<4;i++){
        printf("%c %c\n",multiar[0][i],multiar[0][i+4]);
    }

    // learn c question

    int grades[2][5]={
        {100,99,78,85,60},
        {90,86,82,90,70},
    };

    float average;

    for(int i=0;i<2;i++){
        average=0;
        for(int j=0;j<4;j++){
            average+=grades[i][j];
        }

        printf("\nThe average of marks in subject %d is %.2f",i,average/5);
    }
    return 0;
}