#include <stdio.h>

#define NOMBRE_ETUDIANTS 5
#define TAILLE_CHAINE 50

int main(void)
{
    /* Tableaux pour les informations */
    char noms[NOMBRE_ETUDIANTS][TAILLE_CHAINE] = {
        "Dupont", "Martin", "Diallo", "Nguyen", "Benali"
    };

    char prenoms[NOMBRE_ETUDIANTS][TAILLE_CHAINE] = {
        "Alice", "Paul", "Aminata", "Linh", "Karim"
    };

    char adresses[NOMBRE_ETUDIANTS][TAILLE_CHAINE] = {
        "Paris", "Lyon", "Dakar", "Hanoi", "Casablanca"
    };

    float notes_prog[NOMBRE_ETUDIANTS] = {
        15.5, 12.0, 18.0, 14.5, 16.0
    };

    float notes_sys[NOMBRE_ETUDIANTS] = {
        14.0, 13.5, 17.0, 15.0, 16.5
    };

    /* Affichage des informations */
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++)
    {
        printf("Étudiant %d\n", i + 1);
        printf("Nom       : %s\n", noms[i]);
        printf("Prénom    : %s\n", prenoms[i]);
        printf("Adresse   : %s\n", adresses[i]);
        printf("Note C    : %.2f\n", notes_prog[i]);
        printf("Note OS   : %.2f\n", notes_sys[i]);
        printf("----------------------------\n");
    }

    return 0;
}
