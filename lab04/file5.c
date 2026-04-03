#include <stdio.h>

int main() {
    char str[200];
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);

    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fputs(str, fp);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    char buf[200];
    while (fgets(buf, sizeof(buf), fp) != NULL) {
        printf("%s", buf);
    }
    fclose(fp);
    return 0;
}