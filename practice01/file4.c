#include <stdio.h>

int main() {
    int num;
    num = 25;

    printf("Число: %d\n" , num);
    printf("Адресс: %p\n", (void*)&num);

    return 0;
}