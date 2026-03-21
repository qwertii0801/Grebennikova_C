#include <stdio.h>

int main() {
    long N;
    scanf("%ld", &N);
    if (N < 0) N = -N;

    int sum = 0;
    while (N != 0) {
        sum += N % 10;
        N /= 10;
    }

    printf("%d\n", sum);
    return 0;
}