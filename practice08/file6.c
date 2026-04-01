#include <stdio.h>

int my_strlen(char str[]) {

    int count = 0;
    char *p = str;
    while (*p){
        count += 1;
        p++;

    }
   printf("%d\n", count);
}
int main() {
    char str[] = "hello";
    my_strlen(str);
    return 0;
}

