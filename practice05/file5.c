#include <stdio.h>
int main () {
    int x = 5;
    int y = 3;
    int *p = &x;
    int *d = &y;
    if (*p ==*d) {
       printf("yes\n");
    } else {
        printf("no\n");
    }
    return 0;
}