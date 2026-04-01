#include <stdio.h>

void max2(int a, int b, int *res) {
    if (a > b){
        *res= a;
    } else {
        *res= b;
    }
}
int main () {
    int a = 10;
    int b = 67;
    int result;
    max2(a, b, &result);
    printf("%d\n", result);
    return 0;
}