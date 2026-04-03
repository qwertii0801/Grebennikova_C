#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person p1 = {"Daria", 16};
    FILE *fp = fopen("person.bin", "wb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fwrite(&p1, sizeof(Person), 1, fp);
    fclose(fp);

    Person p2;
    fp = fopen("person.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fread(&p2, sizeof(Person), 1, fp);
    fclose(fp);

    printf("Имя: %s, Возраст: %d\n", p2.name, p2.age);
    return 0;
}