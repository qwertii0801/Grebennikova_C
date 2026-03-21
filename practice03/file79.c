#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Палиндром+сумма: ");
    for (i = 1; i <= n; i++) {
        int num = i, rev = 0, temp, sum = 0;
        temp = num;
        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            sum += temp % 10;
            temp /= 10;
        }
        if (num == rev && sum != 0 && num % sum == 0) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
