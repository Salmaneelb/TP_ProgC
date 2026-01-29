#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main(void)
{
    int   tab_int[TAILLE];
    float tab_float[TAILLE];

    int   *p_int;
    float *p_float;

    /* Initialisation du générateur aléatoire */
    srand(time(NULL));

    /* Remplissage des tableaux avec des valeurs aléatoires */
    p_int = tab_int;
    p_float = tab_float;

    for (int i = 0; i < TAILLE; i++)
    {
        *p_int = rand() % 200;                 /* entiers entre 0 et 199 */
        *p_float = (float)(rand() % 1000) / 100.0f; /* floats entre 0.00 et 9.99 */

        p_int++;
        p_float++;
    }

    /* Affichage AVANT multiplication */
    printf("Tableau d'entiers (avant) :\n");
    p_int = tab_int;
    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d ", *p_int);
        p_int++;
    }

    printf("\n\nTableau de flottants (avant) :\n");
    p_float = tab_float;
    for (int i = 0; i < TAILLE; i++)
    {
        printf("%.2f ", *p_float);
        p_float++;
    }

    /* Multiplication par 3 des indices divisibles par 2 */
    p_int = tab_int;
    p_float = tab_float;

    for (int i = 0; i < TAILLE; i++)
    {
        if (i % 2 == 0)
        {
            *p_int = *p_int * 3;
            *p_float = *p_float * 3;
        }

        p_int++;
        p_float++;
    }

    /* Affichage APRÈS multiplication */
    printf("\n\nTableau d'entiers (après) :\n");
    p_int = tab_int;
    for (int i = 0; i < TAILLE; i++)
    {
        printf("%d ", *p_int);
        p_int++;
    }

    printf("\n\nTableau de flottants (après) :\n");
    p_float = tab_float;
    for (int i = 0; i < TAILLE; i++)
    {
        printf("%.2f ", *p_float);
        p_float++;
    }

    printf("\n");
    return 0;
}
