#include <stdio.h>

int main() {
    int n;
    printf("Введите число: ");
    scanf("%d", &n);
    
    int div2 = (n % 2 == 0);
    int div3 = (n % 3 == 0);
    
    printf("Делится на 2: %s\n", div2 ? "да" : "нет");
    printf("Делится на 3: %s\n", div3 ? "да" : "нет");
    
    return 0;
}