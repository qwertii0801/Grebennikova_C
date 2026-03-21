#include <stdio.h>
int main() {
    int n, i;
    printf("N: ");
    scanf("%d", &n);
    printf("Числа: ");
    for (i = 1; i <= n; i++) {
        int num = i, freq[10] = {0}, temp, has_pair = 0;
        temp = num;
        while (temp > 0) {
            freq[temp % 10]++;
            temp /= 10;
        }
        for (int j = 0; j < 10; j++)
            if (freq[j] == 2) has_pair++;
        if (has_pair == 1) printf("%d ", i);
    }
    printf("\n");
    return 0;
}
