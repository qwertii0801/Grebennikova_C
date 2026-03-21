#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Числа: ");
    for (i = 1; i <= n; i++) {
        int num = i, fact_sum = 0, temp;
        temp = num;
        while (temp > 0) {
            int d = temp % 10;
            int fact = 1;
            for (int j = 1; j <= d; j++) fact *= j;
            fact_sum += fact;
            temp /= 10;
        }
        if (i == fact_sum) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
