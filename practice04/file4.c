#include <stdio.h>
int main() {
    int n, i, sum = 0;
    printf("n: "); scanf("%d", &n);
    printf("%d чисел: ", n);
    for (i = 0; i < n; i++) {
        int x; scanf("%d", &x); sum += x;
    }
    printf("Сумма: %d\n", sum);
    return 0;
}
