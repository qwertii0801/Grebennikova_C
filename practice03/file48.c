#include <stdio.h>
int main() {
    int n; 
    long long sum = 0;
    printf("N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int t = i, has5 = 0;
        while (t > 0) {
            if (t % 10 == 5) { 
                has5 = 1; 
                break; 
            }
            t /= 10;
        }
        if (!has5) sum += i;
    }
    printf("Сумма: %lld\n", sum);
    return 0;
}