#include <stdio.h>

int main(void)
{
    int d = 0x10001000;   /* valeur d'exemple */
    int bit4, bit20;

    /* extraction du 4ème bit de gauche (bit 28) */
    bit4 = (d >> 28) & 1;

    /* extraction du 20ème bit de gauche (bit 12) */
    bit20 = (d >> 12) & 1;

    /* vérification */
    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
