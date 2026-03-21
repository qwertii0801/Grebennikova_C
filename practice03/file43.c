#include <stdio.h>
int main() {
    int n, rev = 0, temp, orig;
    printf("N: ");
    scanf("%d", &n);
    orig = n;
    temp = n < 0 ? -n : n;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("%s\n", (n == rev || n == -rev) ? "ДА" : "НЕТ");
    return 0;
}