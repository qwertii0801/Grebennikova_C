#include <stdio.h>
int main () {
    int x = 8;
    int *p = &x;
    int **pp = &p;
    printf("%d\n",**pp);
    return 0;
}