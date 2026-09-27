#include <stdio.h>

typedef struct {
    const char * name;
    int age;
} person;

int main() {
    person akki;

    akki.name = "Akshut";
    akki.age = 17;
    printf("%s is %d years old.", akki.name, akki.age);
}