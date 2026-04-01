#include <stdio.h>

int main(void) {
    char s[] = "hello world";
    char *p = s;
    int pos = 0;
    while (*p != '\0') {
        if (*p != ' ') {
            if (pos % 2 == 0) {
                if (*p >= 'A' && *p <= 'Z') *p += 32;
            } else {
                if (*p >= 'a' && *p <= 'z') *p -= 32;
            }
            pos++;
        }
        p++;
    }
    printf("%s\n", s);
    return 0;
}