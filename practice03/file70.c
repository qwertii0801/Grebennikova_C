#include <stdio.h>
int main() {
    int n, k, i;
    printf("N: "); scanf("%d", &n);
    printf("K: "); scanf("%d", &k);
    printf("Числа: ");
    for (i = 1; i <= n; i++) {
        int a = i, b = k, gcd;
        while (a && b) {
            if (a > b) a %= b;
            else b %= a;
        }
        gcd = a + b;
        if (gcd == 1) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
