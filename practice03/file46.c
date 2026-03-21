#include <stdio.h>
int main() {
    int n, count = 0, temp;
    printf("N: ");
    scanf("%d", &n);
    temp = n == 0 ? 1 : (n < 0 ? -n : n);
    while (temp > 0) {
        count++;
        temp /= 10;
    }
    printf("Цифр: %d\n", count);
    return 0;
}