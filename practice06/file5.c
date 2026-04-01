#include <stdio.h>
int main () {
    char str[] = "Hello!!!!";
    char *p = str;
    int count = 0;

    while (*p){
        if (*p == '!') {
            count +=1;
        
        }
        p++;
    }
    if (count > 3) {
        printf("Stop\n");
    } else {
        printf("Все хорошо\n");
    }
    return 0;
}