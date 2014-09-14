#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <ctype.h>

char rotate(char c, int key)
{
    int base = 0;
    if (isalpha(c))
    {
        if (isupper(c))
        {
            base = 65;
        } else {
            base = 97;
        }

        c = (((c - base) + key) % 26) + base;
    }
    return c;
}



int main(int argc, char *argv[])
{
    int key = 0, c;
    char *message = NULL;
    size_t len = 0;

    printf("Key: ");
    scanf("%i", &key);

    __fpurge(stdin);
    printf("Message: ");
    getline(&message, &len, stdin);

    for (c = 0; c < strlen(message); c++)
    {
        message[c] = rotate(message[c], key);
    }
    printf("%s", message);
    return 0;
}
