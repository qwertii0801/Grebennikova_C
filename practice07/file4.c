#include <stdio.h>

int max (int a, int b) {
    if (a > b) {
        return a;
    
    }
    if ( b > a) {
        return b;
    }
}
int main () {
    int result = max(5,6);
    printf("%d", result);
    
}