#include <stdio.h>

int main(void)
{
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int nb_nombres = 5;
    int i, j;

    for (i = 0; i < nb_nombres; i++)
    {
        int n = nombres[i];
        int binaire[32];   /* pour stocker les bits */
        int index = 0;

        printf("Nombre %d en binaire : ", n);

        /* cas particulier pour 0 */
        if (n == 0)
        {
            printf("0");
        }
        else
        {
            /* conversion en binaire (division par 2) */
            while (n > 0)
            {
                binaire[index] = n % 2;
                n = n / 2;
                index++;
            }

            /* affichage à l'envers */
            for (j = index - 1; j >= 0; j--)
            {
                printf("%d", binaire[j]);
            }
        }

        printf("\n");
    }

    return 0;
}
