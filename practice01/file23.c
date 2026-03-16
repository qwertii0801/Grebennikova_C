#include <stdio.h>

int main() {
    float a, b;
    printf("Введите два числа a и b: ");
    scanf("%f %f", &a, &b);
    
    if (a > b) {
        printf("a > b: %.2f > %.2f\n", a, b);
    } else if (a < b) {
        printf("a < b: %.2f < %.2f\n", a, b);
    } else {
        printf("a = b: %.2f = %.2f\n", a, b);
    }
    
    return 0;
}