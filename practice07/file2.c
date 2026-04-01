#include <stdio.h>
int square (int x, int b) {
    return x*b;

} 
int main() {
    int result = square(5, 5);
    printf("Square %d\n", result);
    return 0;
}