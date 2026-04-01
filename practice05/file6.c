#include <stdio.h>
int main () {
    int x = 5;
    int *p = &x;
    int *d = NULL;
    d = p;
    printf("%d\n %d\n", *p, *d);
    return 0;

}