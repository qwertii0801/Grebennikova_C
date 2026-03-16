#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int INT_MAX = 2147483647;

    printf("%d\n", n + INT_MAX);
    return 0;
}