#include <stdio.h>

int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fprintf(fp, "%d %s %f\n", 100, "Hello", 12.34);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    int a;
    char s[50];
    float b;
    fscanf(fp, "%d %s %f", &a, s, &b);
    printf("%d %s %f\n", a, s, b);
    fclose(fp);
    return 0;
}