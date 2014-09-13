#include <stdio.h>

#define BUFF_LEN 255

int main( int argc, char *argv[])
{
    char name[BUFF_LEN];
    int age = 0;
    char username[BUFF_LEN];

    printf("What is your name? ");
    scanf("%s", name);
    printf("What is your age? ");
    scanf("%i", &age);
    printf("What is your username? ");
    scanf("%s", username);

    printf("your name is %s, you are %i years old, and your username is %s\n",
           name, age, username);
    return 0;
}
