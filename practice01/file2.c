#include <stdio.h>

int main() {
    int a, b;
    printf("Введите два целых числа через пробел: ");
    scanf("%d %d", &a, &b);

    printf("Сумма: %d\n", a + b);
    printf("Разность: %d\n", a - b);
    printf("Произведение: %d\n", a * b);

    if (b != 0) {
        printf("Целочисленное деление: %d\n", a / b);
    } else {
        printf("Деление на ноль невозможно!\n");
    }

    return 0;
}