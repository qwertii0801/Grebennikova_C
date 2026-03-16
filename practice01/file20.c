#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b == c) {
        printf("%d + %d = %d\n", a, b, c);
    } else {
        printf("%d + %d = %d != %d\n", a, b, a + b, c);
    }
    
    return 0;
}