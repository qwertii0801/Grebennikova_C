#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fputs("Строка 1\n", fp);
    fputs("Строка 2\n", fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    char buf[100];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s", buf);
    }
    fclose(fp);
    return 0;
}