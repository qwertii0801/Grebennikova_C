#include <stdio.h>
int main () {
    int x = 8;
    int *p = &x;
    printf("%zu\n", sizeof(p));
    return 0;
}