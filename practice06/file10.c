#include <stdio.h>
int main () {
    char s[] ="Hello world!";
    char *p = s;
    char len = 0;

    while(*p) {
        len++;
        p++; 
    }
    int half = len / 2;
    char *first = s;
    char *second = s + half;

    p = first;
    while (p < second){
        putchar(*p);
        p++;

    }
    putchar('\n');
    
    p = second;
    while (*p != '\0'){
        putchar(*p);
        p++;

    }
    putchar('\n');
    return 0;

}
   


