#include <stdio.h>
int main() {
    int n, max_d = 0, temp;
    printf("N: ");
    scanf("%d", &n);
    temp = n < 0 ? -n : n;
    while (temp > 0) {
        int d = temp % 10;
        if (d > max_d) max_d = d;
        temp /= 10;
    }
    printf("Макс цифра: %d\n", max_d);
    return 0;
}