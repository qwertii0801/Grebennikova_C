#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Простые делители: ");
    for (i = 1; i <= n; i++) {
        int num = i, has_prime = 0;
        for (int d = 2; d * d <= num; d++) {
            if (num % d == 0) {
                int prime = 1;
                for (int j = 2; j * j <= d; j++)
                    if (d % j == 0) { prime = 0; break; }
                if (prime) has_prime = 1;
            }
        }
        if (has_prime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
