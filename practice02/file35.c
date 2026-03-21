#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            int p = i * j;
            if (p > 30)
                continue;
            printf("%d*%d=%d\n", i, j, p);
        }
    }
    return 0;
}