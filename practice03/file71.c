#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Армстронг: ");
    for (i = 1; i <= n; i++) {
        int num = i, pow_sum = 0, temp, digits = 0;
        temp = num;
        while (temp) { digits++; temp /= 10; }
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            int p = 1;
            for (int j = 0; j < digits; j++) p *= d;
            pow_sum += p;
            temp /= 10;
        }
        if (i == pow_sum) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Числа: ");
    for (i = 1; i <= n; i++) {
        int num = i, sum = 0, prod = 1, temp;
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            sum += d;
            prod *= d;
            temp /= 10;
        }
        if (sum == prod) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
