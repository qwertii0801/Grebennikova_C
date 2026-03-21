#include <stdio.h>
int main() {
    int n, freq[10] = {0}, temp;
    printf("N: ");
    scanf("%d", &n);
    temp = n < 0 ? -n : n;
    while (temp > 0) {
        freq[temp % 10]++;
        temp /= 10;
    }
    printf("Частота:\n");
    for (int i = 0; i < 10; i++)
        if (freq[i]) printf("%d: %d\n", i, freq[i]);
    return 0;
}
