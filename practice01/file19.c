#include <stdio.h>

int main() {
    int n;
    printf("Введите число n: ");
    scanf("%d", &n);
    
    printf("Таблица умножения %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
    return 0;
}