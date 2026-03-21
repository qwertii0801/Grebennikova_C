#include <stdio.h>
int main() {
    int n, rev = 0, temp;
    printf("N: ");
    scanf("%d", &n);
    temp = n < 0 ? -n : n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("Перевернуто: %d\n", rev);
    return 0;
}