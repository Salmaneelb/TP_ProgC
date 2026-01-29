#include <stdio.h>

int main(void)
{
    int a = 2;      /* base */
    int b = 3;      /* exposant */
    int resultat = 1;
    int i;

    /* calcul de a à la puissance b */
    for (i = 1; i <= b; i++)
    {
        resultat *= a;
    }

    printf("%d a la puissance %d = %d\n", a, b, resultat);

    return 0;
}
