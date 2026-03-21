#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Числа: ");
    for (i = 1; i <= n; i++) {
        int num = i, temp, ok = 1;
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            if (d == 0 || num % d != 0) { ok = 0; break; }
            temp /= 10;
        }
        if (ok) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
