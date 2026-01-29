#include <stdio.h>

int main(void)
{
    int n = 5;      /* hauteur de la pyramide */
    int i, j;

    for (i = 1; i <= n; i++)
    {
        /* espaces pour centrer */
        for (j = 1; j <= n - i; j++)
            printf(" ");

        /* nombres croissants de 1 à i */
        for (j = 1; j <= i; j++)
            printf("%d", j);

        /* nombres décroissants de i-1 à 1 */
        for (j = i - 1; j >= 1; j--)
            printf("%d", j);

        printf("\n");
    }

    printf("Generation de la pyramide terminee.\n");
    return 0;
}
