#include <stdio.h>

int main() {
    float x, result;
    printf("Введите число x: ");
    scanf("%f", &x);
    
    if (x > 0) {
        result = x * x;  
        printf("f(x) = %.2f\n", result);
    } else if (x == 0) {
        printf("f(x) = 0\n");
    } else {
        result = -x;
        printf("f(x) = %.2f\n", result);
    }
    
    return 0;
}