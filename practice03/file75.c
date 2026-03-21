#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Возрастание: ");
    for (i = 1; i <= n; i++) {
        int num = i, sorted = 1, prev = -1, temp;
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            if (prev != -1 && d > prev) { sorted = 0; break; }
            prev = d;
            temp /= 10;
        }
        if (sorted) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
