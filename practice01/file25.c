#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    
    printf("Введите два числа и операцию (+, -, *, /): ");
    scanf("%f %f %c", &a, &b, &op);
    
    switch (op) {
        case '+':
            result = a + b;
            printf("%.2f + %.2f = %.2f\n", a, b, result);
            break;
        case '-':
            result = a - b;
            printf("%.2f - %.2f = %.2f\n", a, b, result);
            break;
        case '*':
            result = a * b;
            printf("%.2f * %.2f = %.2f\n", a, b, result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("%.2f / %.2f = %.2f\n", a, b, result);
            } else {
                printf("Деление на ноль невозможно!\n");
            }
            break;
        default:
            printf("Неизвестная операция '%c'\n", op);
    }
    
    return 0;
}