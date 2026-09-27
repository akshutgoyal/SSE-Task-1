#include <stdio.h>
#include <string.h>

int main(){

    char name[] = "Akshut Goyal";
    int age = 17;

    printf("Hey, I am %s, and am %d years old.", name, age);

    // Using pointers
    const char* meow = "Akki";
    printf("\n%d is the length of meow\n",strlen(meow));

    if (strncmp(meow, "Akki", 4) == 0) {
        printf("Hello, %s!\n",name);
    } else {
        printf("You are not Akki. Go away.\n");
    }

    //concat
    char dest[50] = "Bye ";
    strncat(dest, meow, sizeof(dest) - strlen(dest) - 1);
    char src[] = " and see you later!";
    strncat(dest, src, sizeof(dest) - strlen(dest) - 1);
    printf("%s\n", dest);
    return 0;
}