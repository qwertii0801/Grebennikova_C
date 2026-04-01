#include <stdio.h>
int main () {
    int x = 8;
    int *p1 = &x;
    *p1 = 67;
    int **p2 = &p1;

     printf("%d\n", **p2);
     return 0;

}