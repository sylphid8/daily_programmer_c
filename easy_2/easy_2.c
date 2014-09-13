#include <stdio.h>

int main(int argc, char *argv[])
{
    float f, m, a;

    printf("Enter 0 to solve for this value.\n");
    printf("Force: ");
    scanf("%f", &f);
    printf("Mass: ");
    scanf("%f", &m);
    printf("Acceleration: ");
    scanf("%f", &a);


    if (m && a) {
        printf("F = %f\n", m * a);
    } else if (f && a) {
        printf("M = %f\n", f / a);
    } else if ( m && f ) {
        printf("A = %f\n", f / m);
    } else {
        printf("Not enough data!\n");
    }

    return 0;
}
