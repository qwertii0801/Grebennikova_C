#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("3условия: ");
    for (i = 1; i <= n; i++) {
        // 1. Количество цифр простое
        int temp = i, digits = 0;
        while (temp) { digits++; temp /= 10; }
        int digits_prime = 1;
        for (int j = 2; j * j <= digits; j++)
            if (digits % j == 0) digits_prime = 0;
        
        // 2. Сумма цифр простая
        temp = i; int sum = 0;
        while (temp) { sum += temp % 10; temp /= 10; }
        int sum_prime = 1;
        for (int j = 2; j * j <= sum; j++)
            if (sum % j == 0) sum_prime = 0;
        
        // 3. Число НЕ простое
        int is_prime = 1;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0) is_prime = 0;
        
        if (digits_prime && sum_prime && !is_prime) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
