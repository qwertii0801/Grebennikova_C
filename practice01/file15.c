#include <stdio.h>

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    
    printf("Делится на 2: %s\n", (n % 2 == 0) ? "да" : "нет");
    printf("Делится на 3: %s\n", (n % 3 == 0) ? "да" : "нет");
    printf("Делится на 5: %s\n", (n % 5 == 0) ? "да" : "нет");
    
    return 0;
}