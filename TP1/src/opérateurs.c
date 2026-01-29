#include <stdio.h>

int main(void)
{
    int a = 16;
    int b = 3;

    /* opérateurs arithmétiques */
    printf("Addition (a + b) = %d\n", a + b);
    printf("Soustraction (a - b) = %d\n", a - b);
    printf("Multiplication (a * b) = %d\n", a * b);
    printf("Division (a / b) = %d\n", a / b);
    printf("Modulo (a %% b) = %d\n", a % b);

    /* opérateurs de comparaison (résultat booléen : 0 ou 1) */
    printf("a == b : %d\n", a == b);
    printf("a > b  : %d\n", a > b);

    return 0;
}
