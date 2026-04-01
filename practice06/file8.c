#include <stdio.h>

int main(void) {
    char pwd[] = "pass123";
    char *p = pwd;
    int has_digit = 0, has_alpha = 0;

    while (*p != '\0') {
        if ((*p >= '0' && *p <= '9')) has_digit = 1;
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) has_alpha = 1;
        p++;
    }

    if (has_digit && has_alpha)
        printf("OK\n");
    else
        printf("BAD\n");

    return 0;
}