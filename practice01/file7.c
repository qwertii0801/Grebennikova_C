#include <stdio.h>

int main() {
    int a, b;
    float result;
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    result = (float)a / b;
    printf("Результат деления: %.2f\n", result);
    return 0;
}