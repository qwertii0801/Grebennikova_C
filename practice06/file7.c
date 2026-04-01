#include <stdio.h>

int main(void) {
    char s[256] = "Hello world";
    char ch;
    char *read = s;
    char *write = s;
    printf("Введите символ: ");
    scanf("%c", &ch);
    while (*read != '\0') {
        if (*read != ch) {
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
    printf("%s\n", s);
    return 0;
}