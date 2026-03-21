#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int count = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if ((i * j) % 7 == 0)
                count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
