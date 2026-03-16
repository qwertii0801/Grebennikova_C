#include <stdio.h>

int main() {
    float a, b, c, result;
    printf("Введите числа a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    result = ((a + b) * c) / 2.0;
    printf("((a+b)*c)/2 = %.2f\n", result);
    
    return 0;
}