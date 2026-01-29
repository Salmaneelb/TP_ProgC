#include <stdio.h>

/* Calcule la longueur d'une chaîne */
int longueur_chaine(const char *chaine)
{
    int compteur = 0;

    while (chaine[compteur] != '\0')
    {
        compteur++;
    }

    return compteur;
}

/* Copie une chaîne source dans une chaîne destination */
void copier_chaine(char *destination, const char *source)
{
    int i = 0;

    while (source[i] != '\0')
    {
        destination[i] = source[i];
        i++;
    }

    destination[i] = '\0'; /* fin de chaîne */
}

/* Concatène source à la fin de destination */
void concatener_chaine(char *destination, const char *source)
{
    int i = 0;
    int j = 0;

    /* Trouver la fin de destination */
    while (destination[i] != '\0')
    {
        i++;
    }

    /* Ajouter source à partir de la fin */
    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
    }

    destination[i] = '\0'; /* fin de chaîne */
}

int main(void)
{
    char chaine1[100] = "Hello";
    char chaine2[100] = " World!";
    char copie[100];
    char concatenee[200];

    /* Longueur */
    printf("Longueur de \"%s\" : %d\n", chaine1, longueur_chaine(chaine1));
    printf("Longueur de \"%s\" : %d\n", chaine2, longueur_chaine(chaine2));

    /* Copie */
    copier_chaine(copie, chaine1);
    printf("Copie de la première chaîne : %s\n", copie);

    /* Concaténation */
    copier_chaine(concatenee, chaine1);
    concatener_chaine(concatenee, chaine2);
    printf("Chaîne concaténée : %s\n", concatenee);

    return 0;
}
