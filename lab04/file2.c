#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    putc('H', fp);
    putc('i', fp);
    putc('!', fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    int c;
    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
    return 0;
}