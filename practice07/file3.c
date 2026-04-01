#include <stdio.h>
int is_even (int x) {
    return (x % 2);

}
int main () {
    int result = is_even(5);
    printf("%d\n", result);
    return 0;
}