#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

int get_stdin(char **str)
{
    __fpurge(stdin);
    size_t name_len = 0;
    getline(str, &name_len, stdin);
    size_t last = strlen(*str) - 1;
    if ((*str)[last] == '\n') (*str)[last] = '\0';
    __fpurge(stdin);
    return 0;
}

int main( int argc, char *argv[])
{
    char *name = NULL;
    unsigned int age = 0;
    char *username = NULL;
    char *logfile = "logfile";
    FILE *log = NULL;

    printf("What is your name? ");
    get_stdin(&name);   
    printf("What is your age? ");
    scanf("%i", &age);
    printf("What is your username? ");
    get_stdin(&username);
    printf("your name is %s, you are %i years old, and your username is %s\n",
           name, age, username);

    log = fopen(logfile, "a");
    fprintf(log, 
            "your name is %s, you are %i years old, and your username is %s\n",
            name, age, username);

    return 0;
}
