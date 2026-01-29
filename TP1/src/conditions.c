#include <stdio.h>

int main(void)
{
    int somme = 0;
    int i;

    for (i = 1; i <= 1000; i++)
    {
        /* si divisible par 11 : on ignore le nombre */
        if (i % 11 == 0)
            continue;

        /* si divisible par 5 ou par 7, on ajoute à la somme */
        if (i % 5 == 0 || i % 7 == 0)
        {
            somme += i;

            /* si la somme dépasse 5000, on arrête la boucle */
            if (somme > 5000)
                break;
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}

