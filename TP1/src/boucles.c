#include <stdio.h>

int main(void)
{
    int compteur = 5;
    int i = 1, j;

    while (i <= compteur)
    {
        j = 1;
        while (j <= i)
        {
            if (i == compteur || j == 1 || j == i)
                printf("* ");
            else
                printf("# ");

            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
