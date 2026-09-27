#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    int y;
} point;

int main() {
    point *p = (point *)malloc(sizeof(point));
    p->x = 5;
    p->y = 10;
    printf("Point: (%d, %d)\n", p->x, p->y);
    free(p);
    return 0;
}