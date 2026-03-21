#include <stdio.h>
int main() {
    int n, num;
    printf("N: ");
    scanf("%d", &n);
    num = n + 1;
    while (1) {
        int t = num, s = 0;
        while (t > 0) {
            s += t % 10;
            t /= 10;
        }
        if (s != 0 && num % s == 0) break;
        num++;
    }
    printf("Число: %d\n", num);
    return 0;
}
