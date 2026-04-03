#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    Person people[3] = {{"Daria", 16}, {"Victoria", 17}, {"Danila", 67}};
    FILE *fp = fopen("people.bin", "wb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fwrite(people, sizeof(Person), 3, fp);
    fclose(fp);

    Person new_people[3];
    fp = fopen("people.bin", "rb");
    if (fp == NULL) {
        printf("Ошибка открытия\n");
        return 1;
    }
    fread(new_people, sizeof(Person), 3, fp);
    fclose(fp);

    for (int i = 0; i < 3; i++) {
        printf("Имя: %s, Возраст: %d\n", new_people[i].name, new_people[i].age);
    }
    return 0;
}