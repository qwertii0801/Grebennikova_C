#include <stdio.h>
int main() {
    int n, i, max;
    printf("n: "); scanf("%d", &n);
    printf("%d чисел: ", n);
    scanf("%d", &max);
    for (i = 1; i < n; i++) {
        int x; scanf("%d", &x);
        if (x > max) max = x;
    }
    printf("Макс: %d\n", max);
    return 0;
}
