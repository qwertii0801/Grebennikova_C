#include <stdio.h>
int main() {
    int n, i, min, idx;
    printf("n: "); scanf("%d", &n);
    printf("%d чисел: ", n);
    scanf("%d", &min); idx = 0;
    for (i = 1; i < n; i++) {
        int x; scanf("%d", &x);
        if (x < min) { min = x; idx = i; }
    }
    printf("Мин %d на индексе %d\n", min, idx);
    return 0;
}
