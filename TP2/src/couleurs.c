#include <stdio.h>

/* Définition de la structure Couleur RGBA */
struct CouleurRGBA
{
    unsigned char r; /* Rouge */
    unsigned char g; /* Vert */
    unsigned char b; /* Bleu */
    unsigned char a; /* Alpha */
};

#define NOMBRE_COULEURS 10

int main(void)
{
    /* Tableau de 10 couleurs */
    struct CouleurRGBA couleurs[NOMBRE_COULEURS] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0x10, 0x20, 0x30, 0x80}
    };

    /* Affichage des couleurs */
    for (int i = 0; i < NOMBRE_COULEURS; i++)
    {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert  : %d\n", couleurs[i].g);
        printf("Bleu  : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("-------------------------\n");
    }

    return 0;
}
