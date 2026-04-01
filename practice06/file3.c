#include <stdio.h>
int main () {
    char str[] ="Hello";
    char *p = str;

    while (*p != '\0') {
        p++;

    }
    p--;

    while (p >= str){
        printf("%c\n", *p);
        p--;

    }
    
    return 0;
}
