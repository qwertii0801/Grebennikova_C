#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("±1: ");
    for (i = 1; i <= n; i++) {
        int num = i, ok = 1, temp, prev;
        temp = num; prev = temp % 10; temp /= 10;
        while (temp > 0) {
            int d = temp % 10;
            if (d != prev - 1 && d != prev + 1) { ok = 0; break; }
            prev = d; temp /= 10;
        }
        if (ok) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
