#include <stdio.h>

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    
    printf("n & 1 = %d (побитовое И)\n", n & 1);
    printf("n | 1 = %d (побитовое ИЛИ)\n", n | 1);
    printf("n ^ 1 = %d (побитовое XOR)\n", n ^ 1);
    printf("~n = %d (побитовое НЕ)\n", ~n);
    
    return 0;
}