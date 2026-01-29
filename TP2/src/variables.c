#include <stdio.h>
#include <stddef.h>

/* Affiche les octets de [addr] sur [size] octets en hex,
   du plus significatif au moins significatif */
static void afficher_octets_hex(const void *addr, size_t size)
{
    const unsigned char *p = (const unsigned char *)addr;

    /* On inverse pour obtenir une représentation "classique" type 0xAABBCCDD
       sur les machines little-endian (cas le plus courant). */
    for (size_t i = size; i > 0; i--)
    {
        printf("%02x", p[i - 1]);
    }
}

/* Affiche : Adresse + Valeur (octets) */
static void afficher_info(const char *nom, const void *addr, size_t size)
{
    printf("Adresse de %s : %p, Valeur de %s : ", nom, addr, nom);
    afficher_octets_hex(addr, size);
    printf("\n");
}

int main(void)
{
    /* Variables de base (exemples de valeurs initiales) */
    char            c   = 0x41;                /* 'A' */
    short           s   = (short)0x1234;
    int             i   = (int)0xa47865ff;
    long int        l   = (long int)0x11223344;
    long long int   ll  = (long long int)0x0123456789abcdefLL;
    float           f   = 2.0f;                /* 0x40000000 en IEEE-754 */
    double          d   = 2.0;                 /* 0x4000000000000000 en IEEE-754 */
    long double     ld  = 2.0L;                /* dépend de l'implémentation */

    /* Pointeurs vers ces variables */
    char          *pc  = &c;
    short         *ps  = &s;
    int           *pi  = &i;
    long int      *pl  = &l;
    long long int *pll = &ll;
    float         *pf  = &f;
    double        *pd  = &d;
    long double   *pld = &ld;

    printf("Avant la manipulation :\n");
    afficher_info("c",  pc,  sizeof(c));
    afficher_info("s",  ps,  sizeof(s));
    afficher_info("i",  pi,  sizeof(i));
    afficher_info("l",  pl,  sizeof(l));
    afficher_info("ll", pll, sizeof(ll));
    afficher_info("f",  pf,  sizeof(f));
    afficher_info("d",  pd,  sizeof(d));
    afficher_info("ld", pld, sizeof(ld));

    /* Manipulations via pointeurs */
    *pc  = (char)0x42;                 /* 'B' */
    *ps  = (short)(*ps + 1);
    *pi  = *pi - 1;
    *pl  = *pl + 2;
    *pll = *pll ^ 0x1LL;               /* flip du bit 0 */
    *pf  = 1.0f;                       /* 0x3f800000 en IEEE-754 */
    *pd  = 1.0;                        /* 0x3ff0000000000000 en IEEE-754 */
    *pld = 1.0L;

    printf("\nApres la manipulation :\n");
    afficher_info("c",  pc,  sizeof(c));
    afficher_info("s",  ps,  sizeof(s));
    afficher_info("i",  pi,  sizeof(i));
    afficher_info("l",  pl,  sizeof(l));
    afficher_info("ll", pll, sizeof(ll));
    afficher_info("f",  pf,  sizeof(f));
    afficher_info("d",  pd,  sizeof(d));
    afficher_info("ld", pld, sizeof(ld));

    return 0;
}

