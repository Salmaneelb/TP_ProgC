#include <stdio.h>

int main(void)
{
    int n;
    int i;
    int u0 = 0, u1 = 1, un;

    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("n doit être positif.\n");
        return 0;
    }

    /* affichage de U0 */
    printf("%d", u0);

    if (n >= 1)
        printf(", %d", u1);

    /* calcul et affichage de U2 à Un */
    for (i = 2; i <= n; i++)
    {
        un = u0 + u1;
        printf(", %d", un);

        u0 = u1;
        u1 = un;
    }

    printf("\n");
    return 0;
}
