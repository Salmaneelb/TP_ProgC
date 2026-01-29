#include <stdio.h>
#include <string.h>

#define NOMBRE_ETUDIANTS 5
#define TAILLE_CHAINE 100

/* Définition de la structure Étudiant */
struct Etudiant
{
    char nom[TAILLE_CHAINE];
    char prenom[TAILLE_CHAINE];
    char adresse[TAILLE_CHAINE];
    float note_c;
    float note_os;
};

int main(void)
{
    struct Etudiant etudiants[NOMBRE_ETUDIANTS];

    /* Initialisation des données */
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note_c = 16.5;
    etudiants[0].note_os = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note_c = 14.0;
    etudiants[1].note_os = 14.1;

    strcpy(etudiants[2].nom, "Diallo");
    strcpy(etudiants[2].prenom, "Aminata");
    strcpy(etudiants[2].adresse, "15, Rue Cheikh Anta Diop, Dakar");
    etudiants[2].note_c = 18.0;
    etudiants[2].note_os = 17.5;

    strcpy(etudiants[3].nom, "Nguyen");
    strcpy(etudiants[3].prenom, "Linh");
    strcpy(etudiants[3].adresse, "10, Tran Hung Dao, Hanoi");
    etudiants[3].note_c = 15.0;
    etudiants[3].note_os = 16.0;

    strcpy(etudiants[4].nom, "Benali");
    strcpy(etudiants[4].prenom, "Karim");
    strcpy(etudiants[4].adresse, "8, Avenue Hassan II, Casablanca");
    etudiants[4].note_c = 16.8;
    etudiants[4].note_os = 15.9;

    /* Affichage des informations */
    for (int i = 0; i < NOMBRE_ETUDIANTS; i++)
    {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom      : %s\n", etudiants[i].nom);
        printf("Prénom   : %s\n", etudiants[i].prenom);
        printf("Adresse  : %s\n", etudiants[i].adresse);
        printf("Note C   : %.2f\n", etudiants[i].note_c);
        printf("Note OS  : %.2f\n", etudiants[i].note_os);
        printf("-----------------------------\n");
    }

    return 0;
}
