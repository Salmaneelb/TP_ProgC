#include <stdio.h>

int main(void)
{
    /* char */
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    /* short */
    short s = -32000;
    signed short ss = -12345;
    unsigned short us = 65000;

    /* int */
    int i = -1000;
    signed int si = -500;
    unsigned int ui = 3000;

    /* long int */
    long int li = -100000L;
    signed long int sli = -200000L;
    unsigned long int uli = 400000UL;

    /* long long int */
    long long int lli = -9000000000LL;
    signed long long int slli = -8000000000LL;
    unsigned long long int ulli = 18000000000ULL;

    /* float, double, long double */
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    /* affichage */
    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
