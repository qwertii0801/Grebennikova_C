#include <stdio.h>

int main() {
    int x = 5;
    printf("Исходное значение x = %d\n", x);
    
    printf("x++ = %d\n", x++);
    printf("После x++: x = %d\n", x);
    
    x = 5; 
    printf("++x = %d\n", ++x);
    printf("После ++x: x = %d\n", x);
    
    return 0;
}