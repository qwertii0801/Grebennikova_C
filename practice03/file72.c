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
