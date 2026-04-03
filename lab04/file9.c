#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w+");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fprintf(fp, "0123456789");
    fseek(fp, 5, SEEK_SET);
    fprintf(fp, "XXX");
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fseek(fp, 3, SEEK_SET);
    int c;
    while ((c = getc(fp)) != EOF) {
        putchar(c);
    }
    fclose(fp);
    return 0;
}