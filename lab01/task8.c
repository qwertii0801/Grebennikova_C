#include <stdio.h>
#include <limits.h>

int main(void) {
    int x = 2147483647; // INT_MAX на типичной 32‑битной реализации
    printf("x = %d\n", x);
    x = x + 1;
    printf("x + 1 = %d\n", x);
    return 0;
}