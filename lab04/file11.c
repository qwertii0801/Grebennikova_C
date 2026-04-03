#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    int c;
    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }
    if (feof(fp)) {
        printf("\nКонец файла достигнут\n");
    }
    if (ferror(fp)) {
        printf("Ошибка при чтении\n");
    }
    fclose(fp);
    return 0;
}