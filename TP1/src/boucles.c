#include <stdio.h>

int main(void)
{
    int compteur = 5;   /* strictement inférieur à 10 */
    int i, j;

    for (i = 1; i <= compteur; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == compteur || j == 1 || j == i)
                printf("* ");
            else
                printf("# ");
        }
        printf("\n");
    }

    return 0;
}
