#include <stdio.h>

int main() {
    long N;
    scanf("%ld", &N);
    if (N < 0) N = -N;

    int prod = 1;
    int foundNonZero = 0;

    while (N != 0) {
        int d = N % 10;
        if (d != 0) {
            prod *= d;
            foundNonZero = 1;
        }
        N /= 10;
    }

    if (!foundNonZero)
        prod = 1;

    printf("%d\n", prod);
    return 0;
}