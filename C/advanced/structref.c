#include <stdio.h>

typedef struct {
    const char *name;
    int age;
} person;

void birthday(person *p) {
    p->age += 1;
}

int main() {
    person akki;
    akki.name = "Akshut";
    akki.age = 17;

    printf("%s is %d years old.\n", akki.name, akki.age);
    birthday(&akki);
    printf("After birthday, %s is now %d years old.\n", akki.name, akki.age);

    return 0;
}