#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int x = 2; x <= N; x++) {        
        int isPrime = 1;
        for (int d = 2; d * d <= x; d++) {
            if (x % d == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d ", x);
    }

    return 0;
}