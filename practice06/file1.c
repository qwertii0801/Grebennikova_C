#include <stdio.h>

int main() {
    char s[] = "Hello";
    char *p = s;

    while (*p != '\0') {
        putchar(*p);
        putchar('\n');
        p++;
    }
    return 0;
}