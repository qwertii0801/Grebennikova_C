#include <stdio.h>

int main() {
    float celsius, fahrenheit, kelvin;
    printf("Введите температуру в Цельсиях: ");
    scanf("%f", &celsius);
    
    fahrenheit = celsius * 9.0/5.0 + 32;
    kelvin = celsius + 273.15;
    
    printf("Фаренгейты: %.2f\n", fahrenheit);
    printf("Кельвины: %.2f\n", kelvin);
    
    return 0;
}