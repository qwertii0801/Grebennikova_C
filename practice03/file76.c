#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Гора: ");
    for (i = 1; i <= n; i++) {
        int digits[10], count = 0, temp = i;
        while (temp > 0) {
            digits[count++] = temp % 10;
            temp /= 10;
        }
        int peak = 0, up = 1, down = 0;
        for (int j = 1; j < count; j++) {
            if (digits[j] < digits[j-1]) {
                if (!up) break;
                up = 0; down = 1;
            }
        }
        if (up || down) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
