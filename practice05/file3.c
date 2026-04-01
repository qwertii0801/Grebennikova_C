#include <stdio.h>
int main () {
    int x = 10;
    int y = 5;
    
    int *P = &x;
    int *d = &y;
    *P = 4;
    *d = 8;
    printf("%d\n", *P);
    printf("%d\n", *d);
    return 0;


}