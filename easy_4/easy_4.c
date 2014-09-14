#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int c, l;
    int passwords = 1;
    int plength = 8;

    srand(clock());

    switch (argc) {
    case 3:
        passwords = atoi(argv[2]);
    case 2:
        plength = atoi(argv[1]);
    }

    for (l = 1; l <= passwords; l++) {
        for (c = 1; c <= plength; c++)
            printf("%c", (rand() % (126-32)) + 33);
        printf("\n");
    }

    return 0;
}
