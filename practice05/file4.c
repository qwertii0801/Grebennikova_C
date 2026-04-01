#include <stdio.h>
int main () {
    int x = 8;
    int *p = &x;
    printf("%p\n", (void*)p);
    return 0;

}