#include <stdio.h>
int max(int a, int b, int c) {
    if ( a > b && a > c){
        return b;
    }
    if ( c > a && c > b){
        return c;

    }
}
    int main (){
        int result = max (5,6,7);
        printf("%d\n", result);
        return 0;
    }
